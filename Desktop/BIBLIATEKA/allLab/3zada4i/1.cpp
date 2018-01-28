#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int s=0;

	for (int i=1; i<=n; i++){
		int a=pow(i,3);
		cout<<a++<<" ";
	}
	return 0;
}