// factorial using recursion
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n == 0 || n == 1)
    return 1;
  return fact(n - 1) * n;
}

int main()
{
  int n;
  cin >> n;
  std::cout << fact(5);
  return 0;
}

// Time complexity of recursive code is dependent on two factors
// 1. Number of function calls -> n
// 2. What is complexity of each function -> O(1)

// final tc = O(n)