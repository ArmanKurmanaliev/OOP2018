#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string s;
	getline (cin, s);
	int i;

	for (i>s.size()/2; i<s.size(); i++)
	{
		cout<<s[i];
	}

//	cout<<s.size();
	return 0;
}

//13