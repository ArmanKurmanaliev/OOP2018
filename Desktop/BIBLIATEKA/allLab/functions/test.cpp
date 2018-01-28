#include <iostream>
using namespace std;

int factorial (int n)
{
	int f=1, i;
	for(i=2; i<=n; i++)
	{
		f=f*i;
	}
	return f;
}

int main()
{
	int k;
	cin>>k;

	cout<<factorial(k);
	return 0;
}