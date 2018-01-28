#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin>>a;

	int z=a%2;
	a = a / 2;
	int x=a%2;
	a /= 2;
	int c=a%2;
	a /= 2;
	int v=a%2;

	cout<<v<<c<<x<<z;
}