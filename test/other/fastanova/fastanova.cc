#include <iostream>
#include <string>
#include <fstream>
#include <Eigen/Dense>

#include "stats/CStats.h"
#include "stats/CGaussian.h"
#include "stats/CGamma.h"
#include "stats/CBeta.h"
#include "stats/CChi2.h"
#include "stats/CFisherF.h"
#include "stats/CStudentT.h"
#include "regression/CRegression.h"
#include "utils/CMathHelper.h"
#include "gwas/CSingleTraitGWAS.h"
#include "gwas/CFastANOVA.h"
#include "utils/StringHelper.h"

using namespace std;

int main() {
	VectorXd y = VectorXd::Zero(32);
	MatrixXd X = MatrixXd::Zero(32,10000);
	//read phenotype
	ifstream ifs;
	string pheno = "pheno.txt";
	string geno = "geno.txt";
	string line;

	logging(INFO,"Reading Phenotype...");
	ifs.open(pheno.c_str(),ifstream::in);
	if(!ifs.is_open()) {
		logging(ERROR,"Opening file " + pheno);
		return 0;
	}
	int64 j=0;
	while(!ifs.eof()) {
		getline(ifs,line);
		vector<string> sp = StringHelper::split(line,"\t");
		for(uint i=0; i<sp.size();i++) {
			y(i) = StringHelper::string_to<float64>(sp[i]);
		}
	}
	ifs.close();
	
	logging(INFO,"Reading Genotype...");
	ifs.open(geno.c_str(),ifstream::in);
	if(!ifs.is_open()) {
		logging(ERROR,"Opening file " + pheno);
		return 0;
	}
	
	string t = "";
	j=0;
	while(!ifs.eof()) {
		if(j==X.cols()) break;
		getline(ifs,line);
		for(uint i=0; i<line.length();i++) {
			t = line[i];
			X(i,j) = StringHelper::string_to<uint64>(t);
		}
		j++;
	}
	ifs.close();
	VectorXd x1 = VectorXd::Zero(X.rows());
	VectorXd x2 = VectorXd::Zero(X.rows());
	x1 << 1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0;
	x2 << 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1;
	MatrixXd tmp = MatrixXd::Zero(X.rows(),2);
	tmp << x1,x2;
	MatrixXd rand = MatrixXd::Random(32,250000);
	CEpistasis::CFastANOVA fanova(y,rand);
	//fanova.test_associations();
	fanova.test_associations(6);
	logging(INFO,fanova.getPValues().rows());
	return 0;
}
