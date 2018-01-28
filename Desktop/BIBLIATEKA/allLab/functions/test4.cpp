#include <iostream>
#include <cmath>
using namespace std;

int f(int n)
{
	int result=1;
	for(int i=1; i<=n; i++)
		result*=i;
	return result;
}

int main()
{
	int n;
	cin>>n;

	cout<<f(n);
	return 0;
}