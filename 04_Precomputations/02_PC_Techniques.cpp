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
const int N = 1e5 + 10;
const int M = 1e9 + 7;
long long fact[N];
int main()
{
  fact[0] = fact[1] = 1;
  for (int i = 2; i < N; i++)
  {
    fact[i] = fact[i - 1] * i;
  }
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    cout << fact[n];
  }
  return 0;
}
// old code complexity, O(T*N) = 10^10
// new code complexity, O(N) + O(T) = 10^5 + 10^5 = 2*10^5 = 10^5