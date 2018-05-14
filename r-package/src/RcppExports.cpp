// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// BlitzML_new_sparse_dataset
SEXP BlitzML_new_sparse_dataset(const Rcpp::S4& x, const Rcpp::NumericVector& y);
RcppExport SEXP _blitzml_BlitzML_new_sparse_dataset(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(BlitzML_new_sparse_dataset(x, y));
    return rcpp_result_gen;
END_RCPP
}
// BlitzML_new_sparse_logreg_solver
SEXP BlitzML_new_sparse_logreg_solver();
RcppExport SEXP _blitzml_BlitzML_new_sparse_logreg_solver() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(BlitzML_new_sparse_logreg_solver());
    return rcpp_result_gen;
END_RCPP
}
// BlitzML_new_parameters
SEXP BlitzML_new_parameters(const Rcpp::NumericVector params);
RcppExport SEXP _blitzml_BlitzML_new_parameters(SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(BlitzML_new_parameters(params));
    return rcpp_result_gen;
END_RCPP
}
// BlitzML_sparse_linear_solver_compute_max_l1_penalty
double BlitzML_sparse_linear_solver_compute_max_l1_penalty(SEXP xptr_solver, SEXP xptr_dataset, SEXP xptr_params);
RcppExport SEXP _blitzml_BlitzML_sparse_linear_solver_compute_max_l1_penalty(SEXP xptr_solverSEXP, SEXP xptr_datasetSEXP, SEXP xptr_paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_dataset(xptr_datasetSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_params(xptr_paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(BlitzML_sparse_linear_solver_compute_max_l1_penalty(xptr_solver, xptr_dataset, xptr_params));
    return rcpp_result_gen;
END_RCPP
}
// BlitzML_solve_problem
void BlitzML_solve_problem(SEXP xptr_solver, SEXP xptr_dataset, SEXP xptr_params, Rcpp::NumericVector& result, Rcpp::String& status_buffer, const Rcpp::String& log_dir);
RcppExport SEXP _blitzml_BlitzML_solve_problem(SEXP xptr_solverSEXP, SEXP xptr_datasetSEXP, SEXP xptr_paramsSEXP, SEXP resultSEXP, SEXP status_bufferSEXP, SEXP log_dirSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_dataset(xptr_datasetSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_params(xptr_paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type result(resultSEXP);
    Rcpp::traits::input_parameter< Rcpp::String& >::type status_buffer(status_bufferSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String& >::type log_dir(log_dirSEXP);
    BlitzML_solve_problem(xptr_solver, xptr_dataset, xptr_params, result, status_buffer, log_dir);
    return R_NilValue;
END_RCPP
}
// BlitzML_set_tolerance
void BlitzML_set_tolerance(SEXP xptr_solver, double value);
RcppExport SEXP _blitzml_BlitzML_set_tolerance(SEXP xptr_solverSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    BlitzML_set_tolerance(xptr_solver, value);
    return R_NilValue;
END_RCPP
}
// BlitzML_set_max_time
void BlitzML_set_max_time(SEXP xptr_solver, double value);
RcppExport SEXP _blitzml_BlitzML_set_max_time(SEXP xptr_solverSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    BlitzML_set_max_time(xptr_solver, value);
    return R_NilValue;
END_RCPP
}
// BlitzML_set_max_iterations
void BlitzML_set_max_iterations(SEXP xptr_solver, unsigned value);
RcppExport SEXP _blitzml_BlitzML_set_max_iterations(SEXP xptr_solverSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type value(valueSEXP);
    BlitzML_set_max_iterations(xptr_solver, value);
    return R_NilValue;
END_RCPP
}
// BlitzML_set_use_working_sets
void BlitzML_set_use_working_sets(SEXP xptr_solver, unsigned value);
RcppExport SEXP _blitzml_BlitzML_set_use_working_sets(SEXP xptr_solverSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_solver(xptr_solverSEXP);
    Rcpp::traits::input_parameter< unsigned >::type value(valueSEXP);
    BlitzML_set_use_working_sets(xptr_solver, value);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_blitzml_BlitzML_new_sparse_dataset", (DL_FUNC) &_blitzml_BlitzML_new_sparse_dataset, 2},
    {"_blitzml_BlitzML_new_sparse_logreg_solver", (DL_FUNC) &_blitzml_BlitzML_new_sparse_logreg_solver, 0},
    {"_blitzml_BlitzML_new_parameters", (DL_FUNC) &_blitzml_BlitzML_new_parameters, 1},
    {"_blitzml_BlitzML_sparse_linear_solver_compute_max_l1_penalty", (DL_FUNC) &_blitzml_BlitzML_sparse_linear_solver_compute_max_l1_penalty, 3},
    {"_blitzml_BlitzML_solve_problem", (DL_FUNC) &_blitzml_BlitzML_solve_problem, 6},
    {"_blitzml_BlitzML_set_tolerance", (DL_FUNC) &_blitzml_BlitzML_set_tolerance, 2},
    {"_blitzml_BlitzML_set_max_time", (DL_FUNC) &_blitzml_BlitzML_set_max_time, 2},
    {"_blitzml_BlitzML_set_max_iterations", (DL_FUNC) &_blitzml_BlitzML_set_max_iterations, 2},
    {"_blitzml_BlitzML_set_use_working_sets", (DL_FUNC) &_blitzml_BlitzML_set_use_working_sets, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_blitzml(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
