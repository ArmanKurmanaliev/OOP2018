#include<iostream>
using namespace std;
int main()
{
	int a[111][111],i,n,m,q=0,b[111],w;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			b[i]=b[i]+a[i][j];
			}
		if(b[i]>q){
			q=b[i];
			w=i;
		}		
	}
	cout<<q<<endl<<w;
	return 0;
}
