#include <iostream>
using namespace std;

int main()
{
	int a[1001], n, m=-1;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<=n; i++)
	{
		if(a[i]>a[i+1])
			a[i+1]=a[i];
	}
	cout<<a[n];
	return 0;
}