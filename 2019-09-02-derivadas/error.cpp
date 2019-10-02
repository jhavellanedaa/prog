#include <iostream>
#include <cmath>

double fun(double x);
double dev_forward(double x, double h);
double dev_central(double x, double h);
double dev_forward_richardson(double x, double h);
double dev_central_richardson(double x, double h);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);

  double x = M_PI/3.0; // M_PI defined inside cmath
  double h = 0.1;

  for(h=1.0; h >= 1.0e-4; h /= 2.0) {
    double exact = std::cos(x);
    std::cout << h << "\t"
	      << std::fabs(dev_forward(x, h)-exact)/exact << "\t"
	      << std::fabs(dev_central(x, h)-exact)/exact << "\t"
	      << std::fabs(dev_forward_richardson(x, h)-exact)/exact << "\t"
	      << std::fabs(dev_central_richardson(x, h)-exact)/exact << "\n";
  }
  return 0;
}


double fun(double x)
{
  return std::sin(x);
}

double dev_forward(double x, double h)
{
  return (fun(x+h) - fun(x))/h;
}

double dev_central(double x, double h)
{
  return (fun(x+h/2) - fun(x-h/2))/h;
}

double dev_forward_richardson(double x, double h)
{
  double result1 = dev_forward(x, h);
  double result2 = dev_forward(x, h/2);
  return (4*result2 - result1)/3;
}

double dev_central_richardson(double x, double h)
{
  double result1 = dev_central(x, h);
  double result2 = dev_central(x, h/2);
  return (4*result2 - result1)/3;
}
