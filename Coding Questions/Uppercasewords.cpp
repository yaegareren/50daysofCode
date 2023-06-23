//Break out the words in the sentence 
//and make them uppercase

//input: Shree Mangalam
//output: SHREE
//        MANGALAM

//To convert 'c' to 'C
//'c'-'a'=2 and 'C'-'A'=2
//'C=' 'c'-'a'+ 'A'
#include<bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A' +(c-'a');

}
int main(int argc, char const *argv[])
{
	while(true){
	string s;
	cin>>s;
    if(s.size()==0){
    	break;
    }
  
    for(int i=0;i<s.size();++i){
    	s[i]=upper(s[i]);
    }
    cout<<s<<endl;
	
}
return 0;
}