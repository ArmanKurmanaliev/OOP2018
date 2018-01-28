#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int q=0;
	cin>>a>>b;

	for (int i>=a; i<=1; i--)
	{
		if (a%i==0 && b%i==0)
		{
			cout<<i;
		}

	}
	return 0;
}