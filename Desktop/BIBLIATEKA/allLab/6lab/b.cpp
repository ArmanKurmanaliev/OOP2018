#include<iostream>
using namespace std;
int main()
{
	int a[111][111],i,n,m,q=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		//	cout.width(2);
			if(a[i][j]==a[j][i]) q++;
		}
		//cout<<endl;
	}
	if(q==n*n) cout<<"yes";
	else cout<<"no";
	return 0;
}
