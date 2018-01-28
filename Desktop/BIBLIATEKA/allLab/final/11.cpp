#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c;
	cin>>a>>b>>c;

	double h;
	h=tan(c*M_PI/180)*((a-b)/2);

	cout<<(h*(a+b))/2;
	return 0;
}