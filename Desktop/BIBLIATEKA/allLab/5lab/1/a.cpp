#include<iostream>
using namespace std;
int main()
{
	int a[1111],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0) cout<<a[i]<<" ";
	}
	return 0;
}