/*Convert binary strings into decimal strings 

input: 101
output: 5

*/

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t; 
	cin>>t; // for test cases 
	while(t--){

		int n; // for number of characters in string 
		cin>>n;

		string s; // for binary string 
		cin>>s;

		long long int result = 0;
		long long int power_of_2 = 1;

		for(int i=s.size()-1; i>=0; --i){
			int binary_digit = s[i]-'0';

			result = result +( binary_digit * power_of_2);
			power_of_2 = power_of_2 * 2;
		}
		cout<<result<<endl;

	}
	
	return 0;
}

/* INPUT:
 
3
4
0001
2
10
4 
1010 

*/