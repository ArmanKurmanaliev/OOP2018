#include<iostream>
using namespace std;
int main()
{
	int a[1111],i,n,q=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i-1]< a[i]) q++;
	}
	cout<<q;
	return 0;
}
