#include <iostream>

using namespace std;

int main(){


	int n, m;

	cin >> n >> m;

	int a[n][m];

	int k = 0;

	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			for(int j = 0; j < m; j++){
				a[i][j] = k++;
			}
		}
		else{
			for(int j = m - 1; j >= 0; j--){
				a[i][j] = k++;
			}
		}
	}




	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	


	return 0;
}