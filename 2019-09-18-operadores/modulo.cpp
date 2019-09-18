#include <iostream>

int main(void)
{
  int a = 0;
  std::cout<<"ingrese el numero que desea dividir \n";
  std::cin >> a;
  if (a%3 == 0) {
    std::cout << "el numero " <<  a << "  puede ser dividido por 3 \n";
  }
  else{
    std::cout << "el numero " <<  a <<  "  no puede ser dividido por 3 \n";
  }
  
   return 0;
}

  
