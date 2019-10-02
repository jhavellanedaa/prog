#include <iostream>

double inversos(int a);

int main(void)
{
  int a;
  std::cin>>a;
  std::cout << inversos(a)<<"\n"; 
}
double inversos(int a){
  double suma = 0;
  for (int i=1.0; i<=a; i++){
    suma =suma+(1.0/i);
  }
  return suma;
}
