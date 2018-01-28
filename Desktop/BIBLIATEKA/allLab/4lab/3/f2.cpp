#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int i=0, s=0;
	cin>>a;
	b=a;

	while(a!=0)
	{
		cin>>a;
		if(a>b) s++;
		b=a;
	}
	cout<<s;
	return 0;

}