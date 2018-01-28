#include <iostream>
#include <cmath>
using namespace std;

float negativepow (double a, double b)
{
	double res=1;

	for (double i=1; i<=abs(b); i++)
	{
		res*=a;
	}
	if(b<0)
	{
		res=1.0/res;
	}
	return res;
}

int main()
{
	double a, b;
	cin>>a>>b;

	cout<<negativepow(a,b);
	return 0;
}