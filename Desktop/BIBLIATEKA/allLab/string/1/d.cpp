#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, w;
	getline(cin, s);
	getline(cin, w);

	if(s==w)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

	return 0;
}