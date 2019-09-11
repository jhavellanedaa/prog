#include <iostream>

int main(void)
{
  double x = 7.4;
  std::cout << &x << "\n";
  {
    std::cout << &x << "\n";
    double x = 7.4;
    std::cout << &x << "\n";
  }
  std::cout << &x << "\n";
  return 0;
}
  
