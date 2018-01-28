#include <iostream>
using namespace std;

int main()
{
	int a[101][101], n, m, i, j;
	int b[101], w=0, s=1;
	cin>>n>>m;

	for(i=0; i<n; i++){
		b[i]=0;
		for(j=0; j<m; j++){
			cin>>a[i][j];
			b[i]=a[i][j];
			
			if(b[i]>w){
			w=b[i];
			}
			else if(b[i]==w)
			{
				s++;
			}
		}
	}
	cout<<s;
	return 0;
}