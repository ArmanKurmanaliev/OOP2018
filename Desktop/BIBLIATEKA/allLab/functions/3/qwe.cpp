#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	set <string> ss;

	while (cin>>s)
	{
		ss.insert(s);
	}

	for (set<string>::iterator it=ss.begin(); it!=ss.end(); it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}