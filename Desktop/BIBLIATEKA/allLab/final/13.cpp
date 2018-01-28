#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r[9];
	for (int i=1; i<10; i++)
	{
		r[i]=0;
	}
	int a;
	while (cin>>a)
	{
		r[a]++;
		if (a==0)
			break;
	}
	for (int i=1; i<10; i++)
	{
		cout<<r[i]<<" ";
	}
	return 0;
}