#include <iostream>
#include <cmath>

double fun(double x);
double dev_forward(double x, double h);
double dev_central(double x, double h);
double dev_forward_richardson(double x, double h);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);

  double x = M_PI/3.0; // M_PI defined inside cmath
  double h = 0.1;

  //std::printf(" %25.16e %25.16e %25.16e %25.16e %25.16e %25.16e", x, h,
  // std::cos(x), dev_forward(x, h),
  // dev_central(x, h), dev_forward_richardson(x, h));

  for(x=0.0; x <= M_PI; x+= 0.01){
  std::cout << x << "\t" << h << "\t"
	    << std::cos(x) << "\t"
	    << dev_forward(x, h) << "\t"
	    << dev_central(x, h) << "\t"
	    << dev_forward_richardson(x, h) << "\n";
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
