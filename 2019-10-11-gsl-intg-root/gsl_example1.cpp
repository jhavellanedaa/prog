#include <iostream>
#include <gsl/gsl_sf_bessel.h>

int main (void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  for (double x = 0; x<= 25; x+=0.1){
  double y = gsl_sf_bessel_J0 (x);
  std::cout<< x << "\t"<< y << "\n";
  }
  return 0;
}
