// modify by refernce
#include <Rcpp.h>

//[[Rcpp::plugins(cpp11)]]
//[[Rcpp::export]]
void ref_modify(Rcpp::NumericVector& x){
  x(0) = 10; 
}
