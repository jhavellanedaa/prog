#include <iostream>
#include <cmath>

int isprime(int m); // returns 1 if a number is prime
int num_primes(int m); // returns number of primes less or equal to m
void print_primes(int m, int n);

int main(void)
{
  print_primes(3, 109);
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

int num_primes(int m)
{
  int sum = 0;
  for(int ii = 2; ii <= m; ++ii) {
    if (isprime(ii)==1) {
      sum += 1;
    }
  }
  return sum;
}

void print_primes(int m, int n)
{
  for(int ii = m; ii <= n; ++ii) {
    std::cout << ii
	      << "    " << num_primes(ii)
	      <<  "    " << ii/(std::log(ii)-1.08366)
	      << "\n";
  }
}
