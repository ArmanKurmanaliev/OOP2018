#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string h=s;

	reverse (h.begin(), h.end());

	if (h==s)
	{
		cout<<"YES";
	}

	else
	{
		cout<<"NO";
	}

	return 0;

	
}