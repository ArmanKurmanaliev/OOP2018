#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[11111],i,n,m,q=0,max=-100000;
	cin>>n;
	for(i=1;i<=n; i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[1]<<" "<<a[2];
	
	return 0;
}
