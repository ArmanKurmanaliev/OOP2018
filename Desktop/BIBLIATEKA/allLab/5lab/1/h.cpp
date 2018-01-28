#include <iostream>
using namespace std;

int main()
{
	int a[69], n, m, i=0;;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<=n-1; i+=2)
	{

		swap(a[i+1], a[i]);
	}
	for(i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}