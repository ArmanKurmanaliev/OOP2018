#include <iostream>
using namespace std;

int main()
{
	int a[101][101], n, m, i, j;
	cin>>n>>m;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i*j==0) {a[i][j]=1;}
			else if(i*j!=0) {a[i][j]=a[i-1][j]+a[i][j-1];}
//			cout.width(5);
			cout<<"     "<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}