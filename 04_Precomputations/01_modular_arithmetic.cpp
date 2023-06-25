// MODULAR ARITHMETIC
// Print answer modulo 10^9+7

/*

(a+b)%M = ((a%M)+(b%M))%M

(a*b)%M = ((a%M)*(b%M))%M

(a-b)%M = ((a%M)-(b%M)+M)%M

(a/b)%M = ((a%M)*(b^(-1)%M))%M


*/

/*
Given a number N, print its factorial
constraints
1 <= N <= 100

print answer modulo M
where M = 47
*/

/*
using print answer modulo M we can represent large numbers which can be calculated but not represented
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  std::cin >> n;
  int M = 47;
  long long fact = 1;
  for (int i = 2; i <= n; ++i)
  {
    fact = (fact * i) % M;
  }
  cout << fact;
  return 0;
}

// why print answer modulo M where M = 10^9 + 7
// 10^9+7 is very close to the integer maximum so answer is restricted inside the range of integer
// MMI - Multiplicative Inverse, 10^9+7 is a prime number which helps in finding multiplicative inverse