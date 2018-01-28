#include <iostream>
using namespace std;

int main()
{
	int a[101], n, m=0;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<=n; i++)
	{
		if(a[i]!=a[i+1])
			m++;
	}
	cout<<m;
	return 0;
}