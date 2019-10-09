#include <cmath>
#include <iostream>

using fptr = double (double);

double f(double x);
double trapecio(double h, double x0, double xf, fptr fun);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  const double H = 0.01;
  std::cout << trapecio(H, 0.0, 2*M_PI, f) << "\n";
  
  return 0;
}

double f(double x)
{
  return std::sin(x);
}


double trapecio(double h, double x0, double xf, fptr fun)
{
  double sum = 0.0;
  double x = 0.0;
  int N = (xf-x0)/h;
  for(int ii = 1; ii <= N-1; ++ii ) {
    x = x0 + ii*h;
    sum += 2*fun(x);
  }
  sum += fun(x0) + fun(xf);
  return sum*h/2;
}
