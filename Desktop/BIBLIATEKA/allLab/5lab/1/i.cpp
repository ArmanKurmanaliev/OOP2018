#include <iostream>
using namespace std;

int main()
{
	int a[69], n, m;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=n; i>=1; i--)
	{
		a[i+1]=a[i]; // 1 2 3 4 5
		
	}
	a[1]=a[n+1];
	for(i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;	
}