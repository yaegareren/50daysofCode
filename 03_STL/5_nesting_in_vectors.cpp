/* NESTING IN VECTORS: VECTOR OF PAIRS

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int, int>> &v){
  cout<<"Size of vector: "<<v.size()<<endl;
  for (int i=0; i <v.size(); ++i)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
  cout<<endl;
}
int main()
{
  // vector<pair<int, int>> v={{1,2}, {3,4}, {5,6}} ;
  vector<pair<int, int>> v;
  int n;
  cin>>n;
  for(int i=0; i<n; ++i){
    int x, y;
    cin>>x>>y;
    v.push_back({x,y});
    //v.push_back(make_pair(x,y));
  }
  printvec(v);
return 0;
}

*/

/* NESTING IN VECTORS: ARRAY OF VECTORS

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
  cout<<"Size of vector: "<<v.size()<<endl;
  for (int i=0; i <v.size(); ++i)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  // vector<int> v[10]; 10 vectors of 0 size, v[0] --> vector1, v[1] --> vector 2

  int N;
  cin>>N;
  vector <int> v[N];
  for (int i = 0; i < N; ++i)
  {
    int n;
    cin>>n;
    for (int j = 0; j < n; ++j)
    {
      int x;
      cin>>x;
      v[i].push_back(x);
    }


  }

  for (int i = 0; i < N; ++i)
  {
    printvec(v[i]);
  }

  // cout< v[0][0] would print 1
  // it behaves like a 2-d vector in which no. of rows are fixed but no. of columns are dynamic

  return 0;
}

*/

/* NESTING IN VECTORS: VECTOR OF VECTORS

   // to make the number of rows dynamic too

 */

#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
  cout << "Size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> v;
  for (int i = 0; i < N; ++i)
  {
    int n;
    cin >> n;
    vector<int> temp; // because there was no existing
    for (int j = 0; j < n; ++j)
    {
      int x;
      cin >> x;
      temp.push_back(x); // stores the entire row
    }
    v.push_back(temp); // pushing the entire vector onto the the vector
  }
  v[0].push_back(10); // 10 is added to row1 in vector. Size becomes 4 instead of 3

  v.push_back(vector<int>()); // pushing an empty vector onto the vector. Size becomes 3 instead of 4 and we get a 4th vector with size 0

  for (int i = 0; i < v.size(); ++i)
  {
    printvec(v[i]);
  }
  cout << v[0][0]; // prints 1

  return 0;
}

/* INPUT:

3
3
1 2 3
4
2 4 6 8
2
1 2

*/