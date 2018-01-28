#include <iostream>
using namespace std;

int main()
{
	int a[10001],m=0,n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]>0) m++;
	}
	cout<<m;
	return 0;
}