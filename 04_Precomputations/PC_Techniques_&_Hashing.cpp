/*
Given T test cases and in each test case a number N , print its factorial

constraints
1 <= N <= 10^5
1 <= T <= 10^5

print answer modulo M
where M = 10^9+7
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    int M = 1e9 + 7;
    long long fact = 1;
    for (int i = 2; i <= n; ++i)
    {
      fact = (fact * i) % M;
    }
    cout << fact;
  }
  return 0;
}