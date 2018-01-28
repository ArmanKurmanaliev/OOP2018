#include <iostream>
using namespace std;

int main()
{
	double a, b, z;
	double i=0, r=0, s=0;

	while(i==0)
	{
		cin>>a;
		if(a==0) i++;
		s+=a;
		r++;
	}
	
	cout<<(s/(r-1));
	return 0;
}