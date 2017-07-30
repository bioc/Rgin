//
// Created by hclimente on 22/07/2017.
//

#include "gin/model_selection/grid.h"

Grid::Grid(MatrixXd const& X, VectorXd const& y, SparseMatrixXd* const& W, uint const& association ) {
	__X = X;
	__y = y;
	__W = W;

	__computeUnivariate(association);

	__etas = VectorXd::LinSpaced(10, log10(__c.maxCoeff()), log10(__c.minCoeff()));
	for(int i = 0; i < __etas.rows(); i++)
		__etas(i) = pow(10, __etas(i));

	__lambdas = VectorXd::LinSpaced(10, log10(__c.maxCoeff()), log10(__c.minCoeff()));
	for(int i = 0; i < __lambdas.rows(); i++)
		__lambdas(i) = pow(10, __lambdas(i));

	__initGrid();

}

Grid::Grid(MatrixXd const& X, VectorXd const& y, SparseMatrixXd* const& W, uint const& association, VectorXd const& etas, VectorXd const& lambdas) {
	__X = X;
	__y = y;
	__etas = etas;
	__lambdas = lambdas;
	__W = W;
	__initGrid();
	__computeUnivariate(association);

}

void Grid::__initGrid() {

	for (int e = 0; e < __etas.rows(); e++) {
		for (int l = 0; l < __lambdas.rows(); l++) {
			double eta = __etas[e];
			double lambda = __lambdas[l];
			__grid[eta][lambda] = VectorXd();
		}
	}
}

void Grid::__computeUnivariate(uint const& association) {

	UnivariateAssociation snpAssociation(&__X, &__y);

	if(association == SKAT) {
		__c = snpAssociation.computeSKAT();
	} else if (association == CHI2) {
		__c = snpAssociation.computeChi2();
	} else if (association == TREND) {
		__c = snpAssociation.computeTrendTest("additive");
	}

}

void Grid::search() {

	for (int e = 0; e < __etas.rows(); e++) {
		for (int l = 0; l < __lambdas.rows(); l++) {

			double eta = __etas[e];
			double lambda = __lambdas[l];

			Scones s(__c, eta, lambda, *__W);
			s.selectSnps();

			__grid[eta][lambda] = s.selected();

		}
	}
}

VectorXd Grid::selected(double const& eta, double const& lambda) {
	return __grid[eta][lambda];
}

std::vector<VectorXd> Grid::selected(VectorXd const &etas, VectorXd const &lambdas) {
	std::vector<VectorXd> selected;

	for (int e = 0; e < etas.rows(); e++) {
		for (int l = 0; l < lambdas.rows(); l++) {
			double eta = etas[e];
			double lambda = lambdas[l];
			selected.push_back(__grid[eta][lambda]);
		}
	}

	return selected;
}