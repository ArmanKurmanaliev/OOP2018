#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int q=0;
	int f=0;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i]==48)
		{
			q++;
		}

		if (q>f)
		{
			f=q;
		}

		else if (s[i]!=48)
		{
			q=0;
		}
	}

	cout<<f;
	return 0;
}

//00101110000110