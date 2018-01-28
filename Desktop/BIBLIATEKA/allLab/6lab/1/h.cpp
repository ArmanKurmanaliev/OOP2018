#include <iostream>
using namespace std;

int main()
{
	int a[101][101], m, n, i, j;
	cin>>n>>m;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			a[i][j]=i*j;
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}