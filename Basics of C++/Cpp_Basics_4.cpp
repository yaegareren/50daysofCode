// C++ STRINGS, GETLINE, STRING REVERSE AND PALINDROME, DEALING WITH LARGE NUMBERS USING STRING

#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*
  char a='a'; //stores only one character
  string str="Hello";
  cout<<str<<"\n";
  string str2;
  cin>>str2; //cin breaks on spaces and new lines for string inputs.
  cout<<str2<<endl;
  */

  // we can also concatenate strings like str1+str2 after assigning them values.
  // we can perform relational operations on strings. Like comparing them.
  // Indexing starts from 0. So to access separate characters from a string we can do this str[0]. This will give us the first character from the string.
  // String is a collection of characters
  // to know the size of a string str, we can use str.size();
  // to take two inputs in one line, we can use getline(cin,str);
  // we can use cin.ignore() to use getline(cin,str) correctly.

  // To print reverse of a string

  string str;
  // cin.ignore(); use when entering test cases
  getline(cin, str);
  string str_rev;
  for (int i = str.size() - 1; i >= 0; --i)
  {

    str_rev.push_back(str[i]); // we use .push_back() to enter characters
                               //  in the back of the current string
  }
  cout << "\n"
       << str_rev;

  // we can check whether a string is palindrome by only adding one line to
  //  the above code i.e. if(str_rev==str) cout<<"yes"; else cout<<"no";

  // we can also use strings to take inputs that are larger than 10^18

  // the inputs taken are in the form of a character. So, if we try to access
  // a digit in the input we get the ascii value instead. So, to get the
  // digit we subtract the ascii value of 0 from the ascii value of digit.
  // int last_digit= s[s.size()-1]-'0'; //code
}
