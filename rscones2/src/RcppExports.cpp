// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rscones2.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// maxflow
Eigen::VectorXd maxflow(Eigen::SparseMatrix<double,Eigen::ColMajor> lW, Eigen::VectorXd c);
static SEXP rscones2_maxflow_try(SEXP lWSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double,Eigen::ColMajor> >::type lW(lWSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(maxflow(lW, c));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rscones2_maxflow(SEXP lWSEXP, SEXP cSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(rscones2_maxflow_try(lWSEXP, cSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP rscones2_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}
// test_associations_custom_gridsearch
std::vector<Rcpp::List> test_associations_custom_gridsearch(int statistic, std::string filesPath, int min, int max);
static SEXP rscones2_test_associations_custom_gridsearch_try(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type statistic(statisticSEXP);
    Rcpp::traits::input_parameter< std::string >::type filesPath(filesPathSEXP);
    Rcpp::traits::input_parameter< int >::type min(minSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(test_associations_custom_gridsearch(statistic, filesPath, min, max));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rscones2_test_associations_custom_gridsearch(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP minSEXP, SEXP maxSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(rscones2_test_associations_custom_gridsearch_try(statisticSEXP, filesPathSEXP, minSEXP, maxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// test_associations_gridsearch
List test_associations_gridsearch(int statistic, std::string filesPath, int nparams);
static SEXP rscones2_test_associations_gridsearch_try(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP nparamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type statistic(statisticSEXP);
    Rcpp::traits::input_parameter< std::string >::type filesPath(filesPathSEXP);
    Rcpp::traits::input_parameter< int >::type nparams(nparamsSEXP);
    rcpp_result_gen = Rcpp::wrap(test_associations_gridsearch(statistic, filesPath, nparams));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rscones2_test_associations_gridsearch(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP nparamsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(rscones2_test_associations_gridsearch_try(statisticSEXP, filesPathSEXP, nparamsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// test_associations
List test_associations(int statistic, std::string filesPath, double lambda, double eta);
static SEXP rscones2_test_associations_try(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP lambdaSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type statistic(statisticSEXP);
    Rcpp::traits::input_parameter< std::string >::type filesPath(filesPathSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_associations(statistic, filesPath, lambda, eta));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP rscones2_test_associations(SEXP statisticSEXP, SEXP filesPathSEXP, SEXP lambdaSEXP, SEXP etaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(rscones2_test_associations_try(statisticSEXP, filesPathSEXP, lambdaSEXP, etaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int rscones2_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Eigen::VectorXd(*maxflow)(Eigen::SparseMatrix<double,Eigen::ColMajor>,Eigen::VectorXd)");
        signatures.insert("std::vector<Rcpp::List>(*test_associations_custom_gridsearch)(int,std::string,int,int)");
        signatures.insert("List(*test_associations_gridsearch)(int,std::string,int)");
        signatures.insert("List(*test_associations)(int,std::string,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP rscones2_RcppExport_registerCCallable() { 
    R_RegisterCCallable("rscones2", "rscones2_maxflow", (DL_FUNC)rscones2_maxflow_try);
    R_RegisterCCallable("rscones2", "rscones2_test_associations_custom_gridsearch", (DL_FUNC)rscones2_test_associations_custom_gridsearch_try);
    R_RegisterCCallable("rscones2", "rscones2_test_associations_gridsearch", (DL_FUNC)rscones2_test_associations_gridsearch_try);
    R_RegisterCCallable("rscones2", "rscones2_test_associations", (DL_FUNC)rscones2_test_associations_try);
    R_RegisterCCallable("rscones2", "rscones2_RcppExport_validate", (DL_FUNC)rscones2_RcppExport_validate);
    return R_NilValue;
}
