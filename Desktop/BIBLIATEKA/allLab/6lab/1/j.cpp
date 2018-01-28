#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, s;
	cin>>n;
	int a[2*n+1][2*n+1];

	for(int i=0; i<2*n+1; i++){
		for(int j=0; j<2*n+1; j++){
			a[i][j]=i*j;
			cout.width(5);
			cout<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"KOTAKBAS";
	return 0;
}