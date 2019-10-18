#include <iostream>
#include <cmath>
int main()
{
 double suma=0;
 double suma1=0;
 double billy[10]= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
 for(int i=0; i<10; i++){
    suma+=billy[i];
    }
 for(int i=0; i<10; i++){
    suma1+=pow((billy[i]-suma/10),2);
  } 
 std::cout << sqrt (suma1/10) << "\n";
 std::cout << suma/10 <<"\n";
 return 0;
}
