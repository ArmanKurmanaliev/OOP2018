#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n[100][100];
	int a,b;
	cin>>a>>b;


	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cin>>n[i][j];
		}
	}

	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			
		}
	}

	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout<<n[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
