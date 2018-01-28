#include<iostream>
using namespace std;
int main()
{
	long long int n,a[101][101],i,b,j,c[101];
	cin>>b>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==b)
			{
				c[j]=0;
				c[j]=c[j]+1;
			}
		}
		
	}
	for(i=1;i<=n;i++)
	{
		if(c[i]>0)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
