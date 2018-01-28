#include <iostream>
using namespace std;

int main()
{
	string s;
	getline (cin, s);

	for (int i=0; i<s.size(); i++)
	{
		cout<<s[i];
	}
	for(int i=s.size()-1; i>=0; i--)
	{
		if (s[i]=='(')
		{
			s[i]=')';
		}
		cout<<s[i];
	}

	return 0;
}