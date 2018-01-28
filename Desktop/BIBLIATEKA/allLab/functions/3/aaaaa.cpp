#include <iostream>
#include <cmath>
using namespace std;

int nod (int a, int b)
{
	for (int i=a; i>=a/2; i--)
	{
		if (a%i==0 && b%i==0)
		{
			return i;
			break;
		}
	}
}

int main()
{
	int a,b;
	int q=0;
	cin>>a>>b;

	cout<<nod(a,b);
	return 0;
}