/*

Given N strings and Q queries. In each query you are given a string.
Print frequency of thaat string

N=10^6
|S|<=100
Q <= 10^6

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

   unordered_map<string, int> m;

   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      string s;
      cin >> s;
      // m[s]=m[s]+1;
      m[s]++;

      // to calculate frequency we put string into the map and increase the counter by 1
   }

   int q;
   cin >> q;
   while (q--)
   {
      string s;
      cin >> s;
      cout << m[s] << endl;
   }

   return 0;
}

/*
INPUT:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
ghj





*/

// MULTIMAP

// duplicate keys can be stored
// functions are same

/*

multimap<int, string> m;

another way:

map<int, vector<string>> m;





*/
