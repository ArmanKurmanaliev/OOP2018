#include <iostream>
using namespace std;
int main()
{
	int a[1111], n, m, i=0;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=n; i>=1; i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}