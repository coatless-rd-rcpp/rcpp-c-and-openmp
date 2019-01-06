#include <Rcpp.h>

// Ensure _C++_ can access the function.
extern "C" {
  void parallel_function(double *x, int n);
}

//' Multiple a Value By 2
//' 
//' Computes the multiplication of 2 by passing the data into a _C_ routine
//' that is parallelized
//' 
//' @param x A `vector` of numeric values to multiple.
//' @param n The number of cores to use.
//' 
//' @examples
//' 
//' # Data
//' x = 1:5
//' 
//' # Number of Cores to use in Parallelization
//' ncores = 2
//' 
//' # Call the routine
//' multiply_by_two(x, n = ncores)
//' @export
// [[Rcpp::export]]
void multiply_by_two(Rcpp::NumericVector x, int n) {
   parallel_function( x.begin(), n );
}
