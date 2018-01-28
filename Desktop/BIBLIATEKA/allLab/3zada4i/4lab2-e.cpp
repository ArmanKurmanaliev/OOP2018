#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int s=0;

	for (int i=1; i<a; i=i*2){
		s++;
		if (i>=a)
			break;
	}
	cout<<s;
	return 0;
}