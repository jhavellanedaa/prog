#include <iostream>

template <class T,class S>
S max(T a, S b)
{
  S result = 0;
  if ( a >= b ) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}

int main(void)
{
  std::cout << max(-3.2, -3.5) << "\n";
  std::cout << max(2, -5) << "\n";
  std::cout << max(11, 7.9) << "\n"; // error, no hay funcion sobre cargada para esta combinacion
  
  return 0;
}
