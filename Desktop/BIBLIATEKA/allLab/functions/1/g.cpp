#include <iostream>
#include <cmath>
using namespace std;

double fastpow (double a, double b)
{
	double r=1;

	for (double i=0; i<abs(b); i++)
	{
		r*=a;
	}
	return r;
}

int main()
{
	double a,b;
	cin>>a>>b;

	cout<<pow(a,b);
	return 0;
}