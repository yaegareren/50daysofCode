<<<<<<< HEAD
// TIME COMPLEXITY

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  int sum = 0;
  sum = x + x;
  /*
  Number of iterations = 3
  time complexity: O(3)
  O(3) -> O(1) -> constant time
  */

  int n;
  cin >> n;                   // iteration number 5
  for (int i = 0; i < n; i++) // n iteration
  {
    int y;
    y = 5;
    y++;
    std::cout << y << " "; // prints 6 6
  }
  /*
  Number of iterations = 3 + 2
  time complexity: O(5) + O(4*N)
  neglecting constants , time complexity = O(N) -> Linear time
  */

  // 2 nested linear loops will have O(N^2) tc
  // 3 nested linear loops will have O(N^3) tc

  int n1;
  cin >> n1;
  int ct = 0;
  while (n > 0)
  {
    n = n / 2;
    ct++;
  }
  /*
  O(1) + O(1) + O(ct)
  n = 10 -> 10 - 5 - 2 - 1 - 0 (3 steps)
  if a number n can be divided by 2 a total of 'a' times -> 2^a = N
  following logarithmic operations, we get a = log (base2(n)) which is the value of ct
  therefore,   O(1) + O(1) + O(log(n)) = O(log(n))
  */

  int n2;
  cin >> n2;
  int ct1 = 0;
  for (int i = 0; i < n2; i++)
  {
    for (int j = 0; j < i; ++j)
    {
      ct1++;
    }
  }
  /*
    inner loop runs for 0,1,2,3..n times
    the sum of natural numbers is n(n+1)/2
    so O(n^2) becomes the time complexity
  */
}

// Number of iterations in 1 sec are apprroximated to be 10^7
// for 10^8 operations,  10 seconds
// for 10^9 operations,  100 seconds
// for 10^10 operations,  1000 seconds (15 minutes)

// SPACE COMPLEXITY
/*
int a ;
int b = 5;

int n = 100;
int arr[n];

int arr[n][n];

space complexity = O(1) + O(N) + O(N^2) = O(N^2)
=======
// TIME COMPLEXITY

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  int sum = 0;
  sum = x + x;
  /*
  Number of iterations = 3
  time complexity: O(3)
  O(3) -> O(1) -> constant time
  */

  int n;
  cin >> n;                   // iteration number 5
  for (int i = 0; i < n; i++) // n iteration
  {
    int y;
    y = 5;
    y++;
    std::cout << y << " "; // prints 6 6
  }
  /*
  Number of iterations = 3 + 2
  time complexity: O(5) + O(4*N)
  neglecting constants , time complexity = O(N) -> Linear time
  */

  // 2 nested linear loops will have O(N^2) tc
  // 3 nested linear loops will have O(N^3) tc

  int n1;
  cin >> n1;
  int ct = 0;
  while (n > 0)
  {
    n = n / 2;
    ct++;
  }
  /*
  O(1) + O(1) + O(ct)
  n = 10 -> 10 - 5 - 2 - 1 - 0 (3 steps)
  if a number n can be divided by 2 a total of 'a' times -> 2^a = N
  following logarithmic operations, we get a = log (base2(n)) which is the value of ct
  therefore,   O(1) + O(1) + O(log(n)) = O(log(n))
  */

  int n2;
  cin >> n2;
  int ct1 = 0;
  for (int i = 0; i < n2; i++)
  {
    for (int j = 0; j < i; ++j)
    {
      ct1++;
    }
  }
  /*
    inner loop runs for 0,1,2,3..n times
    the sum of natural numbers is n(n+1)/2
    so O(n^2) becomes the time complexity
  */
}

// Number of iterations in 1 sec are apprroximated to be 10^7
// for 10^8 operations,  10 seconds
// for 10^9 operations,  100 seconds
// for 10^10 operations,  1000 seconds (15 minutes)

// SPACE COMPLEXITY
/*
int a ;
int b = 5;

int n = 100;
int arr[n];

int arr[n][n];

space complexity = O(1) + O(N) + O(N^2) = O(N^2)
>>>>>>> 68dd0fc152d20676fe0a1b25c080e2f898348917
*/