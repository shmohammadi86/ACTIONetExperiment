// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// roll_var
arma::vec roll_var(arma::vec& X);
RcppExport SEXP _ACTIONetExperiment_roll_var(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var(X));
    return rcpp_result_gen;
END_RCPP
}
// fast_row_sums
Rcpp::NumericVector fast_row_sums(SEXP& A);
RcppExport SEXP _ACTIONetExperiment_fast_row_sums(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fast_row_sums(A));
    return rcpp_result_gen;
END_RCPP
}
// fast_column_sums
Rcpp::NumericVector fast_column_sums(SEXP& A);
RcppExport SEXP _ACTIONetExperiment_fast_column_sums(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fast_column_sums(A));
    return rcpp_result_gen;
END_RCPP
}
// fast_row_max
Rcpp::NumericVector fast_row_max(SEXP& A);
RcppExport SEXP _ACTIONetExperiment_fast_row_max(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fast_row_max(A));
    return rcpp_result_gen;
END_RCPP
}
// computeSparseRowVariances
Rcpp::NumericVector computeSparseRowVariances(IntegerVector j, NumericVector val, NumericVector rm, int n);
RcppExport SEXP _ACTIONetExperiment_computeSparseRowVariances(SEXP jSEXP, SEXP valSEXP, SEXP rmSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type val(valSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rm(rmSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(computeSparseRowVariances(j, val, rm, n));
    return rcpp_result_gen;
END_RCPP
}
// bind_sparse_mats
arma::sp_mat bind_sparse_mats(arma::sp_mat& A, arma::sp_mat& B, int dim);
RcppExport SEXP _ACTIONetExperiment_bind_sparse_mats(SEXP ASEXP, SEXP BSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(bind_sparse_mats(A, B, dim));
    return rcpp_result_gen;
END_RCPP
}
// csr_sort_indices_inplace
void csr_sort_indices_inplace(IntegerVector& Ap, IntegerVector& Aj, NumericVector& Ax);
RcppExport SEXP _ACTIONetExperiment_csr_sort_indices_inplace(SEXP ApSEXP, SEXP AjSEXP, SEXP AxSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type Ap(ApSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type Aj(AjSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Ax(AxSEXP);
    csr_sort_indices_inplace(Ap, Aj, Ax);
    return R_NilValue;
END_RCPP
}
// csc_sort_indices_inplace
void csc_sort_indices_inplace(IntegerVector& Ap, IntegerVector& Ai, NumericVector& Ax);
RcppExport SEXP _ACTIONetExperiment_csc_sort_indices_inplace(SEXP ApSEXP, SEXP AiSEXP, SEXP AxSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type Ap(ApSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type Ai(AiSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Ax(AxSEXP);
    csc_sort_indices_inplace(Ap, Ai, Ax);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ACTIONetExperiment_roll_var", (DL_FUNC) &_ACTIONetExperiment_roll_var, 1},
    {"_ACTIONetExperiment_fast_row_sums", (DL_FUNC) &_ACTIONetExperiment_fast_row_sums, 1},
    {"_ACTIONetExperiment_fast_column_sums", (DL_FUNC) &_ACTIONetExperiment_fast_column_sums, 1},
    {"_ACTIONetExperiment_fast_row_max", (DL_FUNC) &_ACTIONetExperiment_fast_row_max, 1},
    {"_ACTIONetExperiment_computeSparseRowVariances", (DL_FUNC) &_ACTIONetExperiment_computeSparseRowVariances, 4},
    {"_ACTIONetExperiment_bind_sparse_mats", (DL_FUNC) &_ACTIONetExperiment_bind_sparse_mats, 3},
    {"_ACTIONetExperiment_csr_sort_indices_inplace", (DL_FUNC) &_ACTIONetExperiment_csr_sort_indices_inplace, 3},
    {"_ACTIONetExperiment_csc_sort_indices_inplace", (DL_FUNC) &_ACTIONetExperiment_csc_sort_indices_inplace, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ACTIONetExperiment(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
