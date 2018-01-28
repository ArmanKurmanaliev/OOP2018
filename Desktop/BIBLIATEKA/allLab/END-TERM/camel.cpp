#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);
	int q=1;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i]<=90)
		{
			q++;
		}
	}
	cout<<q;
	return 0;
}


// 65 90  97 122