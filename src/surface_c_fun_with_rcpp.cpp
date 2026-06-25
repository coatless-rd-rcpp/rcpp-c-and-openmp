#include <Rcpp.h>

// Ensure _C++_ can access the function.
extern "C" {
  void parallel_function(double *x, int n);
}

//' Multiply a Vector by Two
//'
//' Doubles each element of a numeric vector by passing the data into a
//' parallelized _C_ routine.
//'
//' @param x A `numeric` vector of values to multiply.
//' @param n The number of elements of `x` to process.
//'
//' @examples
//'
//' # Data
//' x = 1:5
//'
//' # Process all elements of x
//' n = length(x)
//'
//' # Call the routine
//' multiply_by_two(x, n = n)
//' @export
// [[Rcpp::export]]
void multiply_by_two(Rcpp::NumericVector x, int n) {
   parallel_function( x.begin(), n );
}
