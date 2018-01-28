#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, a, b, d, e;
	double an;
	cin>>h>>a>>b;

	d=h-a;
	e=a-b;

	an=ceil(d/e);
	cout<<an+1;
	return 0;
}