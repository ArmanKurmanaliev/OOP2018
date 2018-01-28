#include<iostream>
using namespace std;
int main()
{
	int a[101], n, m;
	int i;
	cin>>n;

	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=n-1; n>0; i--)
	{
		cout<<a[i];
	}
	return 0;
}