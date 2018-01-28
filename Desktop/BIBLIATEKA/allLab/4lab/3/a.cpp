#include<iostream>
using namespace std;
int main()
{
	int n,m,i=0,a=0;
	while(a==0)
	{
		cin>>n;
		if(n==0) a++;
		i++;
	}
	cin>>m;
	cout<<i-1;
	return 0;
}