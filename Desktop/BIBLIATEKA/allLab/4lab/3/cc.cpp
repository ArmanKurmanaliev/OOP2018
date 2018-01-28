#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int i=0, s=0, r=0;

	while(i==0)
	{
		cin>>a;
		if(a==0) i++;
		s+=a;
	}
	cin>>b;
	cout<<s;
	return 0;
}