// Pointer is a datatype that can store memory address of a variable

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x = 4;
  int *p_x = &x;

  std::cout << "Address of x using &x: " << &x << endl;
  std::cout << "Address of x using (p_x): " << (p_x) << endl;
  std::cout << "Value at (p_x) using dereferencing: " << *(p_x) << endl;

  // changing value of *p_x will change the value at the original address and hence x will also be changed

  *p_x = 5;
  std::cout << "Changed Value of x: " << x << endl;

  std::cout << "pointer addition(p_x + 1): " << p_x + 1 << endl;

  // DOUBLE POINTERS

  int **p_p_x = &p_x;
  std::cout << "Address of pointer p_x using (&p_x): " << p_p_x << endl;
  std::cout << "Address of pointer p_x using (p_p_x): " << &p_x << endl;
  std::cout << "Address which is stored in that location(it is the address of x, value at p_p_x): " << *p_p_x << endl;
  std::cout << "Prints value of x(Value at *p_p_x): " << **p_p_x << endl;

  **p_p_x = 7;
  std::cout << "Changed Value of x: " << x << endl;

  int a[10];
  a[0] = 2;
  a[1] = 4;
  std::cout << "a: " << a << endl;         // address: 0x61fedc
  std::cout << "&a[0]: " << &a[0] << endl; // address:  0x61fedc
  std::cout << "*a: " << *a << endl;       // prints 2
  std::cout << "a+1: " << a + 1 << endl;   // address: 0x61fee0
  std::cout << "&a[1]: " << &a[1] << endl; // address: 0x61fee0

  // Passing pointers to function

  // void increment(int *x) {
  //   (*x)++;
  // }
  // int k = 4;
  // std::cout<<a<<endl; // prints 4
  // increment(&a);
  // cout<<a<<endl; // prints 5
}