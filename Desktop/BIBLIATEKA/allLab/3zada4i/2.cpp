#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int n;
	int s=0;

	for(int i=1; i<=a; i++){
		cin>>n;
		if (n==0) s++;
	}
	cout<<s;
	return 0;
}