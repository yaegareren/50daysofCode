#include <bits/stdc++.h>
using namespace std;
void printvec(vector<string> &v)
{
  cout << "Size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    // v.size and v.push_back have T.C. O(1)
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<string> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin >> s;
    v.push_back(s);
  }
  printvec(v);
  return 0;
}