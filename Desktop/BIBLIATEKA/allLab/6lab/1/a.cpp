#include<iostream>
using namespace std;
int main()
{
	int a[111][111],i,n,m,q=-1,b[111],w,ii,jj,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1) a[i][j]=1;
			if(i+j>n-1) a[i][j]=2; 
		}	
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		//	cout.width(2);
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}
	
	return 0;
}