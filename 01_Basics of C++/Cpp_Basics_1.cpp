// C++ Basics - 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
  std::cout << "Hello World" << endl; // basic print statement

  // datatypes are int, char, double, float, bool
  // double has 2x more precision than float , float = 4 bytes and double = 8 bytes

  char c = 'a';
  int a = 3;
  double b = 3.5;
  bool d = false; // true -> 1 and false -> 0

  std::cout << c << " " << a << " " << b << " " << d << endl;

  // larger datatypes
  // long int, long long int

  // arithmetic operators are +, -, *, /, % (modulo)
  std::cout << (5 % 3) << endl; // returns remainder which is 2

  // a++ means value of a will be increased after it has been used once
  // a++ means value of a will be increased before it has been used

  int x = 5;
  std::cout << x++; // prints 5 and then value is increased to 6
  std::cout << ++x; // value is increased to 7 from 6

  // relational operators are == (equals to), != (not equals to), >, <, <=, >=

  // every character has an ascii value, a = 97, A = 65
  char p = 'a';
  char q = 'A';
  std::cout << endl
            << int(p) << " " // prints 97
            << int(q) << " " // prints 65
            << p - q;        // prints 32

  // taking inputs
  // integer input
  std::cout << endl;
  int a1;
  std::cin >> a1; // enter integer
  std::cout << a1;

  // double input
  std::cout << endl;
  double b1;
  std::cin >> b1; // enter double (example 2.57)
  std::cout << b1;

  // multiple inputs in a single line
  char c1;
  float f1;
  std::cout << endl;
  std::cin >> c1 >> f1;
  std::cout << c1 << " " << f1;

  // storing integer in char datatype
  char h1;
  std::cin >> h1;                      // take 9 as input
  std::cout << (h1) << " " << int(h1); // 9 is stored as a character whose ascii value is 57

  return 0;
}

// Notes

/*
datatypes in c++: char- stores character
                  int- stores integer
                  float and double- stores decimal
                  bool- stores true false in the form
                        of 0 and 1

  endl is used for new line. /n is faster.

  long int and long long int can be used to store
  large integers

   a%b prints the remainder of the operation

   a++ : value is used and then incremented
   ++a : value is incremented first and then used
   similarly for -- operation.

 char c= 'a'; can store only a single character
   a-> 97 ... z-> 122
   A-> 65 ... Z-> 90

   to check ascii value of character:
   char c= 'a';
   cout<<(int)c; here we use typecasting to find
                 the ascii value of c.



we can store integers from 0-9 in characters. They
are stored as characters and on prinitng the values
of the variable the integer value is printed. But,
if the same variable is typecasted then it prints its
ascii value.
0 -> 48 ... 9->57

 character- single quotes
 string- double quotes

*/
