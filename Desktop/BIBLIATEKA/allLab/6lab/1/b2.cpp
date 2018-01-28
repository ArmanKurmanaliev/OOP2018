#include <iostream>
using namespace std;

int main()
{
	int a[101][101],b[101], n, m, i, j;
	int s=0, i1, j1;
	cin>>n>>m;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin>>a[i][j];
			b[i]=a[i][j];
			if(b[i]>s){
				s=b[i];
				i1=i;
				j1=j;
				}
			}
	}
	cout<<s<<endl<<i1<<" "<<j1;
	return 0;
}