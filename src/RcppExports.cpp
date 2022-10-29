// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rtruncweibull
double rtruncweibull(double shape, double scale, double a, double b);
RcppExport SEXP _oncomsm_rtruncweibull(SEXP shapeSEXP, SEXP scaleSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(rtruncweibull(shape, scale, a, b));
    return rcpp_result_gen;
END_RCPP
}
// impute_srp_model
DataFrame impute_srp_model(DataFrame df, NumericMatrix p, NumericVector shape_vec, NumericVector scale_vec, NumericVector visit_spacing, int n_sim, int n_groups);
RcppExport SEXP _oncomsm_impute_srp_model(SEXP dfSEXP, SEXP pSEXP, SEXP shape_vecSEXP, SEXP scale_vecSEXP, SEXP visit_spacingSEXP, SEXP n_simSEXP, SEXP n_groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type shape_vec(shape_vecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale_vec(scale_vecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type visit_spacing(visit_spacingSEXP);
    Rcpp::traits::input_parameter< int >::type n_sim(n_simSEXP);
    Rcpp::traits::input_parameter< int >::type n_groups(n_groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(impute_srp_model(df, p, shape_vec, scale_vec, visit_spacing, n_sim, n_groups));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_stan_fit4srp_model_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_oncomsm_rtruncweibull", (DL_FUNC) &_oncomsm_rtruncweibull, 4},
    {"_oncomsm_impute_srp_model", (DL_FUNC) &_oncomsm_impute_srp_model, 7},
    {"_rcpp_module_boot_stan_fit4srp_model_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4srp_model_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_oncomsm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
