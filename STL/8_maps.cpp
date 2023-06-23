// maps are implemented through red-black tress
// keys and pairs are sorted
// keys should be unique

#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
  cout << "size: " << m.size() << endl;

  for (auto &it : m)
  {
    cout << it.first << " " << it.second << endl;

    // another way

    // for(it=m.begin(); it!= m.end(); ++it){
    // 	cout<<it->first<<" "<<it->second<<endl;
    // }
  }
  cout << endl;
}
int main()
{
  map<int, string> m;
  m[1] = "abc"; // printed first
  m[5] = "cdc"; // printed second
  m.insert(make_pair(4, "afg"));
  m.insert(make_pair(3, "cde"));

  // m["abcd"]="abcd"; // s.size()*log(n)

  // map<int, string> ::iterator it; initializing iterator

  print(m);

  // inserting values and accessing has tc of o(log(n))

  map<int, int> m1;
  m1[6];
  for (auto &it1 : m1)
  {
    cout << it1.first << " " << it1.second << endl;
  }

  // by default, 0 is added for integer, double and float if value isn't provided.Empty strings are added for strings

  // to find a key
  auto it = m.find(3); // O(log(n))
  if (it == m.end())
  {
    cout << "NO Value";
  }
  else
  {
    cout << (*it).first << " " << (*it).second;
  }
  cout << endl;
  // print(m);

  // to delete
  // m.erase(); // takes 2 values. either a key or an iterator ---> O(log(n))

  /*
   auto it= m.find(5);
   if(it!=m.end())  // check
   m.erase(it); // using iterator

   OR,\

   m.erase(5); // using key

  */

  // m.clear() -> deletes the entire map

  return 0;
}