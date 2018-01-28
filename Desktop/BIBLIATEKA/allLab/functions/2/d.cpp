#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);

	for (int i=0; i<s.size(); i+=1)
	{
		if (i==s.size()-1)
		{
			cout<<s[i];
		}
		else
		{
		cout<<s[i]<<'*';
		}
	}
	return 0;
}