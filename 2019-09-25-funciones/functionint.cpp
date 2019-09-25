#include <iostream>

void helloworld(int m);

int main(void)
{
  helloworld(5);
  return 0;
}
void helloworld(int m)
{
  std::cout<<"hello world from a function ->" << m << "\n";
}
