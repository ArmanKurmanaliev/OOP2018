#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,p;
	cin>>s>>p;
	int x;
	int y;

	for (int i=0; i<=s; i++)
	{
		if ((i*i)-(s*i)+p==0)
		{
			x=i;
			y=s-x;
			break;
		}
	}
	cout<<x<<" "<<y;
	return 0;
}