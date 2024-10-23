#include <Rcpp.h>

//[[Rcpp::export]]
Rcpp::NumericVector testy(){
    return Rcpp::NumericVector::create(1, 2, 3);
}