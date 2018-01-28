#include <iostream>
#include <cmath>
using namespace std;

float powerr(int a,int b)
{
	float res=1;

	for(int i=0; i<abs(b); i++)
		res=res*a;
	if(b<0)
	{
		res=1.0/res;
	}
	return res;
}

int main()
{
	int a,b;
	cin>>a>>b;

	cout<<powerr(a,b);
	return 0;
}