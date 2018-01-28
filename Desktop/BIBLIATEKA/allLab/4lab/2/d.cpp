#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int s=0;

	for(int i=1; i<=a; i=i*2){
		if (i==a)
			s++;
	}
	if (s>0) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;
}