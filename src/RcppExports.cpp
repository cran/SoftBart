// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rmvnorm
arma::vec rmvnorm(const arma::vec& mean, const arma::mat& Precision);
RcppExport SEXP _SoftBart_rmvnorm(SEXP meanSEXP, SEXP PrecisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Precision(PrecisionSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm(mean, Precision));
    return rcpp_result_gen;
END_RCPP
}
// choll
arma::mat choll(const arma::mat& Sigma);
RcppExport SEXP _SoftBart_choll(SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(choll(Sigma));
    return rcpp_result_gen;
END_RCPP
}
// update_sigma
double update_sigma(const arma::vec& r, double sigma_hat, double sigma_old, double temperature);
RcppExport SEXP _SoftBart_update_sigma(SEXP rSEXP, SEXP sigma_hatSEXP, SEXP sigma_oldSEXP, SEXP temperatureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_old(sigma_oldSEXP);
    Rcpp::traits::input_parameter< double >::type temperature(temperatureSEXP);
    rcpp_result_gen = Rcpp::wrap(update_sigma(r, sigma_hat, sigma_old, temperature));
    return rcpp_result_gen;
END_RCPP
}
// rlgam
double rlgam(double shape);
RcppExport SEXP _SoftBart_rlgam(SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(rlgam(shape));
    return rcpp_result_gen;
END_RCPP
}
// SoftBart
List SoftBart(const arma::mat& X, const arma::vec& Y, const arma::mat& X_test, const arma::uvec& group, double alpha, double beta, double gamma, double sigma, double shape, double width, int num_tree, double sigma_hat, double k, double alpha_scale, double alpha_shape_1, double alpha_shape_2, double tau_rate, double num_tree_prob, double temperature, const arma::vec& weights, int num_burn, int num_thin, int num_save, int num_print, bool update_sigma_mu, bool update_s, bool update_alpha, bool update_beta, bool update_gamma, bool update_tau, bool update_tau_mean, bool update_num_tree, bool update_sigma);
RcppExport SEXP _SoftBart_SoftBart(SEXP XSEXP, SEXP YSEXP, SEXP X_testSEXP, SEXP groupSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP sigmaSEXP, SEXP shapeSEXP, SEXP widthSEXP, SEXP num_treeSEXP, SEXP sigma_hatSEXP, SEXP kSEXP, SEXP alpha_scaleSEXP, SEXP alpha_shape_1SEXP, SEXP alpha_shape_2SEXP, SEXP tau_rateSEXP, SEXP num_tree_probSEXP, SEXP temperatureSEXP, SEXP weightsSEXP, SEXP num_burnSEXP, SEXP num_thinSEXP, SEXP num_saveSEXP, SEXP num_printSEXP, SEXP update_sigma_muSEXP, SEXP update_sSEXP, SEXP update_alphaSEXP, SEXP update_betaSEXP, SEXP update_gammaSEXP, SEXP update_tauSEXP, SEXP update_tau_meanSEXP, SEXP update_num_treeSEXP, SEXP update_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type num_tree(num_treeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_scale(alpha_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_shape_1(alpha_shape_1SEXP);
    Rcpp::traits::input_parameter< double >::type alpha_shape_2(alpha_shape_2SEXP);
    Rcpp::traits::input_parameter< double >::type tau_rate(tau_rateSEXP);
    Rcpp::traits::input_parameter< double >::type num_tree_prob(num_tree_probSEXP);
    Rcpp::traits::input_parameter< double >::type temperature(temperatureSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type num_burn(num_burnSEXP);
    Rcpp::traits::input_parameter< int >::type num_thin(num_thinSEXP);
    Rcpp::traits::input_parameter< int >::type num_save(num_saveSEXP);
    Rcpp::traits::input_parameter< int >::type num_print(num_printSEXP);
    Rcpp::traits::input_parameter< bool >::type update_sigma_mu(update_sigma_muSEXP);
    Rcpp::traits::input_parameter< bool >::type update_s(update_sSEXP);
    Rcpp::traits::input_parameter< bool >::type update_alpha(update_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type update_beta(update_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type update_gamma(update_gammaSEXP);
    Rcpp::traits::input_parameter< bool >::type update_tau(update_tauSEXP);
    Rcpp::traits::input_parameter< bool >::type update_tau_mean(update_tau_meanSEXP);
    Rcpp::traits::input_parameter< bool >::type update_num_tree(update_num_treeSEXP);
    Rcpp::traits::input_parameter< bool >::type update_sigma(update_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(SoftBart(X, Y, X_test, group, alpha, beta, gamma, sigma, shape, width, num_tree, sigma_hat, k, alpha_scale, alpha_shape_1, alpha_shape_2, tau_rate, num_tree_prob, temperature, weights, num_burn, num_thin, num_save, num_print, update_sigma_mu, update_s, update_alpha, update_beta, update_gamma, update_tau, update_tau_mean, update_num_tree, update_sigma));
    return rcpp_result_gen;
END_RCPP
}
// do_mh
bool do_mh(double loglik_new, double loglik_old, double new_to_old, double old_to_new);
RcppExport SEXP _SoftBart_do_mh(SEXP loglik_newSEXP, SEXP loglik_oldSEXP, SEXP new_to_oldSEXP, SEXP old_to_newSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type loglik_new(loglik_newSEXP);
    Rcpp::traits::input_parameter< double >::type loglik_old(loglik_oldSEXP);
    Rcpp::traits::input_parameter< double >::type new_to_old(new_to_oldSEXP);
    Rcpp::traits::input_parameter< double >::type old_to_new(old_to_newSEXP);
    rcpp_result_gen = Rcpp::wrap(do_mh(loglik_new, loglik_old, new_to_old, old_to_new));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_mod_forest();

static const R_CallMethodDef CallEntries[] = {
    {"_SoftBart_rmvnorm", (DL_FUNC) &_SoftBart_rmvnorm, 2},
    {"_SoftBart_choll", (DL_FUNC) &_SoftBart_choll, 1},
    {"_SoftBart_update_sigma", (DL_FUNC) &_SoftBart_update_sigma, 4},
    {"_SoftBart_rlgam", (DL_FUNC) &_SoftBart_rlgam, 1},
    {"_SoftBart_SoftBart", (DL_FUNC) &_SoftBart_SoftBart, 33},
    {"_SoftBart_do_mh", (DL_FUNC) &_SoftBart_do_mh, 4},
    {"_rcpp_module_boot_mod_forest", (DL_FUNC) &_rcpp_module_boot_mod_forest, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_SoftBart(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}