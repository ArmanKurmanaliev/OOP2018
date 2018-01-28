#include <iostream>
using namespace std;

int main()
{
	int a,b,max1=-1,max2=-1;
	int s=0,i=0;

	while(i!=1)
	{

		cin>>a;
		if(a==0)
		{
			i=1;
		}
		if(max1<a)
		{
			max2=max1; //-1  2  7
			max1=a;    // 2  7  9
		}

	}
	cout<<max2;
	return 0;
}