// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// agony
void agony(Rcpp::CharacterVector inname, Rcpp::CharacterVector outname);
RcppExport SEXP _ASCETIC_agony(SEXP innameSEXP, SEXP outnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inname(innameSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outname(outnameSEXP);
    agony(inname, outname);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ASCETIC_agony", (DL_FUNC) &_ASCETIC_agony, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ASCETIC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
