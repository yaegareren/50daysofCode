#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &st)
{
  for (auto value : st)
  {
    cout << value << endl;
  }
}

int main()
{
  unordered_set<string> st;
  // only store unique elements
  st.insert("abc"); // O(1)
  st.insert("zsdf");
  st.insert("bcd");

  // find and erase function

  // auto it= st.find("abc");  // O(1)
  // if(it!=st.end()){
  //   cout<<(*it)<<" "<<endl; // prints abc
  //   st.erase(it); // deletes abc
  // }

  print(st);
  return 0;
}

/*

Given N strings and Q queries. In each query you are given a string.
Print yes if string is present else print no

N=10^6
|S|<=100
Q <= 10^6



#include<bits/stdc++.h>
using namespace std;

int main() {

   unordered_set<string> st;

   int n;
   cin>>n;
   for(int i=0; i <n; i++){
    string s;
  cin>>s;

  st.insert(s);
}

      int q;
      cin>>q;
      while(q--){
        string s;
        cin>> s;
          auto it= st.find(s);
   if(it!=st.end()){
     cout<<"yes"<<endl;

   }
   else{
    cout<<"No";
   }

      }
  return 0;
}

*/