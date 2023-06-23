/*
Vectors are similar to arrays. But their size can change dynamically */

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)
{
  cout << "Size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    // v.size and v.push_back have T.C. O(1)
    cout << v[i] << " ";
  }
  v.push_back(2); // this won't show in o/p
  cout << endl;
}
int main()
{
  int a[10];
  vector<int> v;
  // vector<int> v(10); to declare fixed sized array wich can be later dynamically changed

  // vector <int> v(10,3); declares  a vector of size 10 that has 3 stored at every place
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  v.push_back(7);
  printvec(v);
  cout << endl;

  v.pop_back(); // deletes last value
  printvec(v);

  /*  Creating a copy of a vector
  vector <int> v;
  v.push_back(7);
  v.push_back(6);

  vector<int> v2= v;  // O(n)
  // vector <int> &v2=v;
  v2.push_back(5);
  printvec(v);
  printvec(v2);

  changes in v2 will not reflect in v
  output:
  size:2
   7 6

  size: 3
  7 6 5

  */

  /* When vectors are passed to functions, their  copies are created and any changes made are not reflected in the vector. So, we pass references.

    void printvec(vector<int>& v){
    cout<<"Size of vector: "<<v.size()<<endl;
    for (int i=0; i <v.size(); ++i)
    {
      // v.size and v.push_back have T.C. O(1)
      cout<<v[i]<<" ";
    }v.push_back(2); // this would show in the output
    cout<<endl;
  }  */

  return 0;
}