#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if (n%i==0){
			return i;
		}		
	}
	return n;
}

int main()
{
	int a;
	cin>>a;
	cout<<MinDivisor(a);
	return 0;
}
