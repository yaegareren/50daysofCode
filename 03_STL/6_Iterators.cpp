/*
ITERATORS:
  Some containers don't have indexing like
  maps, sets. To access the values inside them iterators are used.

  Iterators point to the element of the containers

*/

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v={2,3,5,6,7};

  // begin() -> points to 2  --> v[0]
  // end() -> points to space just after 7

  // it ++ -> next iterator
  // it +1 -> next location

  // in case of vector both are same because vector is continuous, but in case of set and maps it+1 is an invalid operation because it can't take us to the next location. it++, however takes us to the next iterator. Maps and sets are discontinuous in nature.



  for (int i = 0; i < v.size(); ++i)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  vector<int> ::iterator it; // declaring iterator
  it= v.begin (); // initializing iterator
  cout<<*it<<endl; // prints 2
  cout<<(*(it+1))<<endl; //prints 3

  for(it=v.begin(); it!=v.end(); ++it){
    cout<<*(it)<<" ";
  }


  return 0;
}

*/

/* VECTOR PAIR */

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
  vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

  vector<pair<int, int>>::iterator it; // declaring iterator

  for (it = v_p.begin(); it != v_p.end(); ++it)
  {
    cout << (*it).first << " " << (*it).second << endl;
  }

  // another way
  //  for(it=v_p.begin(); it!= v_p.end(); ++it){
  //    cout<< (it->first)<<" "<<(it->second)<<endl;
  //  }

  // (*it).first <=> (it->first)

  return 0;
}
