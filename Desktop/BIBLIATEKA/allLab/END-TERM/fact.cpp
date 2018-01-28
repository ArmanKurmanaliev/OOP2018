#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int factorial (int a)
{
	int res=1;
	for (int i=1; i<=a; i++)
	{
		res*=i;
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	int k;

	vector <int> v;

	for (int i=0; i<n; i++)
	{
		cin>>k;
		k=factorial(k);
		v.push_back(k);
	}

	for (vector <int>::iterator it=v.begin(); it!=v.end(); it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}