#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &st)
{
  for (auto value : st)
  {
    cout << value << endl;
  }
}

int main()
{
  multiset<string> st;

  // stores elements in sorted order
  // allows to store duplicate elements

  st.insert("abc"); // log n
  st.insert("zsdf");
  st.insert("bcd");
  st.insert("abc");

  // find and erase function

  auto it = st.find("abc"); // log(n)
  if (it != st.end())
  {
    cout << (*it) << " " << endl; // prints abc
    st.erase(it);                 // deletes only first abc
  }

  // if duplicates are present then iterator it returns the value of first and only first abc is deleted

  // st.erase("abc"); would delete both the abc's

  print(st);
  return 0;
}
