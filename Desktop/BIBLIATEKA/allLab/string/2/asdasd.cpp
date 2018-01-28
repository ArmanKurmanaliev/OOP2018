#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) 
				A[i][j] = 1;
			else if(i+j == n-1)
				A[i][j] = 1;
			else if(i+j<=n-2 && i>j)
				A[i][j] = 0;
			else if(i+j>=n && i<j)
				A[i][j] = 0;
		}
	}


	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}