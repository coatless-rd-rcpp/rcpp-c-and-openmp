#include <R.h>
#include <Rinternals.h>

#ifdef _OPENMP
#include <omp.h>
#endif

void parallel_function(double *x, int n) {   
  int i;
  #pragma omp parallel for firstprivate(x, n)
  for (i = 0; i < n; i++){ x[i] *= 2; }
}
