#include <bits/stdc++.h>
using namespace std;
int main()
{
	/* int a[10];
	a[0]=
	a[1]=
	a[2]=
	.
	.
	.
	a[9]=

	if index>size of array, we get the segmentation fault. We are trying to
	access the memory that has not been allocated. */

	/* int n;
	cin>>n; //take array size
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; //input elements into array
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i]; //add elements entered into the array

	}
	cout<<sum; //output elements of the array */

	// we can use strings instead of character array

	// 2-D array

	/*

	int n; // denotes rows
	int m; // denotes columns

	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){ // loop to input rows
		 for(int j=0;j<m;j++){ //loop to input columns
			cin>>a[i][j];
		 }
	}

	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	}

	/*

/* if we are declaring a local array,the size of array is of order 10^5
in online judges. */

	/* if we are declaring a global array, we need to put  a constant variable
	like const int n=1e7; . the size of array is of order 10^7 */

	/*
		int main() {
			const int N  = 1e7;
			int a[N];
			a[0] = 2;
			cout<<a[0]; // this will give segmentation fault (till 1e5 is acceptable inside main. 1e7 can be used in global declaration). This is because variables declared locally are stored inside stack memory. Globally declared variables are stored inside data segment which does not have a limit.
		}
	*/
}