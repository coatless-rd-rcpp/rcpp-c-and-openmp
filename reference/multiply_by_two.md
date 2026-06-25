# Multiply a Vector by Two

Doubles each element of a numeric vector by passing the data into a
parallelized *C* routine.

## Usage

``` r
multiply_by_two(x, n)
```

## Arguments

- x:

  A `numeric` vector of values to multiply.

- n:

  The number of elements of `x` to process.

## Examples

``` r

# Data
x = 1:5

# Process all elements of x
n = length(x)

# Call the routine
multiply_by_two(x, n = n)
```
