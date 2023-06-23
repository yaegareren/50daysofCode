#include <bits/stdc++.h>
using namespace std;
/* void printHello(){
  cout<<"printHello";

}

int sum(int a, int b){
  int result= a+b;
  return result;
}

int digit_sum(int n){
  int ds=0;
  while(n){
      ds+=n%10;
      n=n/10;
  }
  return ds;
}

*/

int increment(int n)
{
  n++;
  return n;
}
int main()
{
  // main is a default function from where the programming starts.
  // int is the return type of the function
  // return 0 means the program is successful. It is optional.

  /* int a,b;
   cin>>a>>b;
   cout<<digit_sum(a)+digit_sum(b); */

  int a = 3;
  cout << a;        // output is 3
  a = increment(a); // output is 4
  cout << "\n"
       << a;

  /* but if we remove the return n from the increment function both the
     outputs will be 3 because a copy of a is passed to the function and the a
     in main was not affected. This is called pass by value. If we want to get 4 as
     output then we have to use reference in the function. This is called pass
     by reference. */

  // pass by reference:

  /*

  int increment(int &n){
  n++;
  return n;
}
int main()
{

  int a=3;
  cout<<a; //output is 3
  a = increment(a); //output is 4
  cout<<"\n"<<a;

  */

  // in order to use swap functions we need to perform pass by references
  // arrays are always passed by references.
  // by default all datatypes are passed using pass by value
  // when passing 1-d arrays, we don't need to mention the size in the function.
  // although, we can mention the size.
  // but when 2-d arrays are passed we must pass atleast second size in the function.
  // we can declare arrays globally and access them directly inside the functions.
}