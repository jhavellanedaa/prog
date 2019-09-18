#include <iostream>

int main(void)
{
  std::cout << ( (5==5) && (3>6) ) << "\n";
  std::cout << ( (5==5) or (3>6) ) << "\n";
  std::cout << ( (5==5) xor (3>6) ) << "\n";

  int a = 0;
  int b = 5;
  a= (b=3, b+2);
  std::cout << a << "\n"; 
  
  return 0;
}
