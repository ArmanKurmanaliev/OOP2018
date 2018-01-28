#include <iostream>
using namespace std;

int numsum (string s)
{
	int a=0;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i]>=47 && s[i]<=57)
			a++;
	}
	return a;
}

int main()
{
	string s;
	getline (cin, s);

	cout<<numsum(s);
	return 0;
}