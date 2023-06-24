#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {2, 3, 5, 6, 7};

  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  vector<int>::iterator it; // declaring iterator

  // through range based loops we can directly iterate over the elements in the container

  for (it = v.begin(); it != v.end(); ++it)
  {
    cout << *(it) << " ";
  }
  cout << endl;

  // range based loops
  for (auto value : v)
  {
    cout << value << " ";
  }
  cout << endl;

  // the values coming into (auto value) are just copies

  // if we want actual values to come we can use auto &value .

  // using range based loops in vector-pair

  vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
  for (auto &value1 : v_p)
  {
    cout << value1.first << " " << value1.second << endl;
  }

  // auto keyword dynamically determines the datatype

  return 0;
}
