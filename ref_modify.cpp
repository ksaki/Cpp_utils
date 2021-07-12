// modify by refernce
#include <Rcpp.h>


//[[Rcpp::export]]
void ref_modify(Rcpp::NumericVector& x){
  x(0) = 10; 
}
