#include<iostream>
using namespace std;
int main()
{
	int a[111][111],i,j,n,m,q=0,z;
	int b[111];
	cin>>n>>m;
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	for(i=1; i<=n; i++){
		for(i=1; j<=m; j++){
		b[i]=b[i]+a[i][j];
		}
		if(b[i]>q){
			q=b[i];
			z=i;
		}
	}
	cout<<q<<endl<<z;
	return 0;
}