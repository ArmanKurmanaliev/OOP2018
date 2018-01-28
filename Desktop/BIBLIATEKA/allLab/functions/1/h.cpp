#include <iostream>
#include <cmath>
using namespace std;

int fib (int w)
{
	int q[1111];

	q[0]=1;
	q[1]=1;

	for (int i=2; i<=w; i++)
	{
		q[i]=q[i-1]+q[i-2];
	}
	return q[w];
}

int main()
{
	int a;
	cin>>a;

	cout<<fib(a);
	return 0;
}