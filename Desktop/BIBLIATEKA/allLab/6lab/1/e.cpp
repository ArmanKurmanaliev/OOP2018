#include <iostream>
using namespace std;
int b[111];

int main(){
	int a[101][101], n, m, i, j, i1, j1, w;
	int mx=0, same=0;
	cin>>n>>m;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin>>a[i][j];
			b[i]+=a[i][j];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(a[i][j]>mx)
			{
				mx=a[i][j];
				w=i;
			}
			else if(a[i][j]==mx)
			{
				if(b[i]>b[w])
				{
					w=i;
				}
			}
		}
	}
	cout<<w;
	return 0;
}