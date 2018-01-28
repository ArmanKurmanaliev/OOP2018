#include <iostream>
using namespace std;

int main()
{
	int a[101][101], n, m, i, j;
	cin>>n>>m;

	int z=0;

	for(i=0; i<n; i++){
		if(i%2==0){
			for(j=0; j<m; j++){
				a[i][j]=z++;
			}
		}else{
			for(j=m-1; j>=0; j--){
				a[i][j]=z++;
			}
		}
	}

	for(i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout.width(3);
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}