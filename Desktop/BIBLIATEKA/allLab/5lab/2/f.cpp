#include<iostream>
using namespace std;
int main()
{
	int a[11111],i,n,m,q=0,max=-100000;
	cin>>n;
	for(i=1;i<=n; i++)
	{
		cin>>a[i];
		if(a[i]>max) 
		{
			max=a[i];
			q=i;
		}
	}
	cout<<q;
	return 0;
}
