#include <iostream>
using namespace std;

double powr(double a, int b)
{
	double  result=1;
	for(int i=0; i<b; i++)
	{
	result*=a;	
	}
	return result;
};

int main()
{
	double a,b;
	cin>>a>>b;

	cout<<powr(a,b);
	return 0;
}