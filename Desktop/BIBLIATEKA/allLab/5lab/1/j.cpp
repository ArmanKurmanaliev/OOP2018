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
	for(i=1; i<=n; i++)
	{
		if(a[i]>a[i+1])
			a[i+1]=a[i];  //4 1 2 5 2 7
	}
	cout<<a[n];
	return 0;
}


