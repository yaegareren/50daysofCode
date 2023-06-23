// Nesting in maps

#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<pair<int, int>, int> mpp;

	// map<set<int>, int> mpp1;
	set<int> s1 = {1, 2, 3};
	set<int> s2 = {2, 3};
	cout << (s1 < s2) << endl; // prints 1 because true

	pair<int, int> p1, p2;

	p1 = {1, 2};
	p2 = {2, 3};

	cout << (p1 < p2) << endl; // prints 1 because true

	map<pair<string, string>, vector<int>> mpp2;
	int n;
	cin >> n;

	for (auto i = 0; i < n; i++)
	{
		string fn, ln; // stores first and last name
		int ct;				 // stores total number of marks

		cin >> fn >> ln >> ct;
		for (auto j = 0; j < ct; ++j)
		{
			int x;
			cin >> x;
			mpp2[make_pair(fn, ln)].push_back(x);
		}
	}
	for (auto &pr : mpp2)
	{
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout << full_name.first << " " << full_name.second << endl;
		cout << list.size() << endl;
		for (auto &element : list)
		{
			cout << element << " ";
		}
		cout << endl;
	}

	return 0;
}

/* INPUT

3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4

*/

/* Problem statement:

 take inputs from the user. First name, last name and number of scores. Print the details as output

3 -> number of entries

a b -> fn, ln

4 -> numbers of scores

1 2 3 4 -> 4 different scores

*/