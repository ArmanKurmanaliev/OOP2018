#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b)
{
	int result=a*b;
	return result;
}

float powerr(int a,int b)
{
	float result=1;

	for(int i=0; i<abs(b); i++)
		result=result*a;
	if(b<0)
	{
		result=1.0/result;
	}
	return result;
}

int main()
{
	int a,b;
	cin>>a>>b;

	cout<<powerr(a,b);
	return 0;
}