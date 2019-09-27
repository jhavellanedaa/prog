#include <iostream>
#include <cmath>

int isprime(int m); // returns 1 if a number is prime
void print_primes(int m, int n);

int main(void)
{
  print_primes(1, 100);
  return 0;
}

int isprime(int m)
{
  if (m == 1) return 0;
  int flag = 1;
  for(int ii = 2; ii <= std::sqrt(m); ++ii) {
    if (m%ii==0) {
      flag = 0;
      break;
    }
  }
  return flag;
}

void print_primes(int m, int n)
{
  for(int ii = m; ii <= n; ++ii) {
    if (isprime(ii)) {
      std::cout << ii << std::endl;
    }
  }
}
