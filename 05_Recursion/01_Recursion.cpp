// Recursion - when a function calls itself and is only terminated when it encounters a base condition

/*
INTERNAL IMPLEMENTATION
when a function keeps calling itself, stack overflow occurs

*/

#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
  if (n == 0)
    return;
  std::cout << n << endl;
  func(n - 1);
}

int main()
{
  func(5);
  return 0;
}
