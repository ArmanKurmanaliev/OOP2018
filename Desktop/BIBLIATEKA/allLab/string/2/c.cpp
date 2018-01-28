#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);

	for (int i=s.size()/2; i<s.size(); i++)
	{
		cout<<s[i];
	}

	for (int j=0; j<s.size()/2; j++)
	{
		cout<<s[j];
	}
	return 0;
}