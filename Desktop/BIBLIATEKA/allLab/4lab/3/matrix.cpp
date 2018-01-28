#include <iostream>
using namespace std;

int main()
{
	int  a, b;
	int s=0, x=0;

	while(x==0)
	{
		cin>>a;
		if(a==0) x++;
		s=s+a;
	}
	cout<<s;
	return 0;
}