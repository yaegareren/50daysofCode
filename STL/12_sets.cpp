// sets are implemented through red black trees (Self-balancing)

#include <bits/stdc++.h>
using namespace std;

void print(set<string> &st)
{
   for (auto value : st)
   {
      cout << value << endl;
   }

   // another loop
   //  for(auto it= st.begin(); it!= st.end(); ++it){
   //  	cout<<(*it)<<endl;
   //  }
}

int main()
{
   set<string> st;
   // stores elements in sorted order
   // only store unique elements
   st.insert("abc"); // log n
   st.insert("zsdf");
   st.insert("bcd");

   // find and erase function

   // auto it= st.find("abc");  // log(n)
   // if(it!=st.end()){
   // 	cout<<(*it)<<" "<<endl; // prints abc
   // 	st.erase(it); // deletes abc
   // }

   print(st);
   return 0;
}

/* Given N strings.
Print unique strings in lexiographical order

N=10^6
|S|<=100
Q <= 10^6



#include<bits/stdc++.h>
using namespace std;

int main() {

   set<string > st;

   int n;
   cin>>n;
   for(int i=0; i <n; i++){
      string s;
   cin>>s;
    st.insert(s);

   }

   for(auto pr: st){
   cout<<pr<<endl;
}

  return 0;
}

*/