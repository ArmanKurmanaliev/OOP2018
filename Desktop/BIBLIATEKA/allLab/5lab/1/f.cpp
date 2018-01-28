#include<iostream>
using namespace std;
int main()
{
	int a[10001], n, m, s=0;
	int i;
	cin>>n;

	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<n-1; i++)
	{
		if(a[i-1]<a[i] && a[i+1]<a[i]) s++;
	}
	cout<<s;
	return 0;
}