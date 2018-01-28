#include <iostream>
using namespace std;

int main()
{
	int a[101], n, m;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=1; i<=n; i++)
	{
		if(m<=a[i] && m>a[i+1]) // 10 9 8 7 7 5
			cout<<i+1;
	}
	return 0;
}