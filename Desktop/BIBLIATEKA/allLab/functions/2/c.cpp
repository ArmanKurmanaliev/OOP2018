#include <iostream>
using namespace std;

int main()
{
	string s;
	getline (cin, s);
	int a=0;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i]>=47 && s[i]<=57)
		{
			a++;
		}
	}
	cout<<a;
	return 0;
}