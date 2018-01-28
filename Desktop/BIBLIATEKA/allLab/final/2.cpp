#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	bool n;
	int q=0;
	
	for (int i=0; i<a; i++)
	{
		cin>>n;
		if (n==0)
		{
			q++;
		}
	}
	cout<<min(q,a-q);
	return 0;
}
