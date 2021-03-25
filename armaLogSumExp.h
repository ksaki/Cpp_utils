// LogSumExponential with armadillo vector

#include<RcppArmadillo.h>

using namespace Rcpp;

//[[Rcpp::plugins(cpp11)]]
//[[Rcpp::depends(RcppArmadillo)]]
//[[Rcpp::export]]
double armaLogSumExp(arma::vec v){
  double max = v.max();
  double temp = 0;
  for (auto it=v.begin(); it!=v.end(); ++it){
    temp += exp(*it-max);
  }

  return log(temp) + max;
}
