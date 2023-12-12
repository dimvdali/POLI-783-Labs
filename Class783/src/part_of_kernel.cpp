
#include <Rcpp.h>
#include <iostream>
#include <cmath>

using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
double part_of_kernel(const NumericVector& a,
                      const NumericVector& b, double& n) {
  double result = 0.0;
  for (auto i=a.begin(), j=b.begin(); i != a.end(); ++i, ++j)

  {
    result += pow(*i - *j, 2)/n;
  }
  return exp(-0.5*result);
}
