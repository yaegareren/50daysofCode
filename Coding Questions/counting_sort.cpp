/*

Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting sort. 

input: 
N = 5 
S = edsab 

output: 
abdes 


*/

#include<bits/stdc++.h>
using namespace std; 

class solution {

  public: 
  string countSort(string arr) {
    vector<int> count(26, 0); 

    for(int i=0; i< arr.size(); i++){
      count[arr[i]-'a']++; // let's say we receive character 'b' . 'b'-'a' = 1. Count of 1 will get incremented at the position, wherever we see a character b. 
    }
    
    for(auto i=1; i< count.size(); i++){
      count[i]+= count[i-1]; 

    }

    string s(arr.length(), ' '); // string made of empty spaces which will later be filled 

    for(int i= 0; i< arr.size(); i++) { 
      int x = --count[arr[i]-'a']; 
      s[x] = arr[i]; 
    }
    cout<<s; 
    return s; 
  }
};


int main() {  
  
  solution s1; 
  s1.countSort("acaabb"); 
  return 0; 
}

/*
In counting sort, we count the characters. 
We use this when the range is very small. 

intuition :
declare an array of 26 characters for storing alphabets (0-25)

every index of array represents a character. 
0 -> a
1 -> b
2 -> c
3 -> d and so on

upon encountering the character in string, we increase the count of that character and move to the next position in string and update the count accordingly. 

string: acaabb 
array:  |3|2|1| |....
         a b c d   

let s be a sorted string: _ _ _ _ _ _ 

the count of a is 3 that means it is the third character and nothing is smaller than a. 

the count of b is 2 and adding the  count of a and b, it becomes 5 so that means b comes at the 5th position. 

the count of c is 1 and adding the updated count of b 
i.e. 5, it becomes 6.  So, c comes at the sixth position. 

updated array count: 
        |3|5|6| |
         a b c d   

we place "a" at the third position and reduce the count to 2. 

next character in string is c. It is placed at the sixth position. (since there are already 5 elements that are less than or equal to c). Count reduced to 5. 

next character is "a" , it is placed at the second position(since count=2) and reduce the count to 1. 

next character is "a" , it is placed at the first position(since count=1) and reduce the count to 0. 

next character in string is b. It is placed at the fifth position. (since there are already 4 elements that are less than or equal to b). Count reduced to 4. 

next character is "b" , it is placed at the fourth position(since count=4) and reduce the count to 3. 


*/