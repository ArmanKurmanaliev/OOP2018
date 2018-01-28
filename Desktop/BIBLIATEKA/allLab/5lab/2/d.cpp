#include <iostream>
using namespace std;

int main()
{
	int a[1001], m, n;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=1; i<=n; i++)
	{
		if(m==a[i])
			cout<<i<<" ";
	}
	return 0;
}