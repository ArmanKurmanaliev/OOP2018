#include <iostream>
using namespace std;

int main()
{
	double  a, b=0;
	double s=0, x=0;
	double w;

	while(x==0)
	{
		cin>>a;
		if(a==0) x++;
		s=s+a;
		b++;
	}
	w=s/(b-1);
	cout<<w;
	return 0;
}