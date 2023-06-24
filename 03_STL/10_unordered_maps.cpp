// unordered maps are implemented through inbuilt hash tables

// keys and pairs are not sorted and are stored in random order

// valid keys datatype

// Basic datatypes, strings have internally defined hash functions

/*

only certain datatypes can be used with unordered map because of the implementation. Since hash values are calculated for hash table implementation and there is no defined implementation for calculating the hash value of datatypes like pair.

*/

#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m)
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
  unordered_map<int, string> m;
  m[1] = "abc"; // printed first
  m[5] = "cdc"; // printed second
  m.insert(make_pair(4, "afg"));
  m.insert(make_pair(3, "cde"));

  // map<int, string> ::iterator it; initializing iterator

  print(m);

  // inserting values and accessing has tc of o(1)

  // to find a key
  auto it = m.find(3); // O(1)
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
  // m.erase(); // takes 2 values. either a key or an iterator ---> O(l)

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