#include <iostream>
using namespace std;

char star(string s)
{
	for (int i=0; i<s.size(); i++)
	{
		if (s[i]==s.size()-1)
		{
			return s[i];
		}
		else
		{
			return s[i]+'*';
		}
	}
}

int main()
{
	string s;
	getline (cin, s);

	cout<<star(s);
	return 0;
}