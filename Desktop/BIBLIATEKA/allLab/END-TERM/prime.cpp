#include <iostream>
#include <cmath>
using namespace std;

int prime (int a)
{
	int q=0;
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
		{
			q++;
			break;
		}
	}
	return q;
}

int main()
{
	int a;
	cin>>a;
	int k;

	int q=0;

	for (int i=0; i<a; i++)
	{
		cin>>k;
//		if (k==2)
//		{
//			q++;
//		}
		if (prime(k)==0)
		{
			q++;
		}
	}
	cout<<q<<endl;
	return 0;
}