# POLI-783-Labs
Simple package for POLI 783


The package containes function part_of_kernel ()

This is the result of my final project for POLI 783 Lab classes. *part_of_kernel ()* covers instructions from weeks 1-4 and uses Rcpp extension. The function has 3 arguments: two vectors and a constant.

See for more details as it should be: https://en.wikipedia.org/wiki/Radial_basis_function_kernel

# Usage
part_of_kernel(x, y, n)

arguments
- x: vector of numbers
- y: vector of numbers
- n: constant

# Example

vector1 = runif(n=5000, min=1, max=99)

vector2 = runif(n=5000, min=1, max=99)

n = 5

part_of_kernel(vector1, vector2, n)

![](https://github.com/dimvdali/POLI-783-Labs/blob/main/Class783/screenshot.png?raw=true)




















