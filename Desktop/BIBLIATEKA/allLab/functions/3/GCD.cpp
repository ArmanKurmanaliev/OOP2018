#include <iostream>
#include <cmath>
using namespace std;

int gcd (int a, int b)
{
	while (b!=0)
	{
		int k=a;
		a=b;
		b=k%b;
	}
	return a;
}

int main()
{
	int a,b;
	int q=0;
	cin>>a>>b;

	cout<<gcd(a,b);
	return 0;
}