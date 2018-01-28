#include<iostream>
using namespace std;
int main()
{
	int n,m=-1;
	int i=0,a=0;
	while(a==0)
	{
		cin>>n;
		if(n==0) a++;
		if(n>m) m=n;
	}
	cout<<m;
	return 0;
}