#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int min=1;
	int ans=0;

	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	if (a[n-1]=min)
	{
		for (int i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		return 0;
	}

	for (int i=0; i<n; i++)
	{
		if (a[i]<min)
		{
			min=a[i];
			ans=i;
		}
	}
	for (int i=0; i<n; i++)
	{
		if (i!=ans)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<min<<endl;
	return 0;
}