#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, w;
	int x=1;
	getline (cin, s);
	getline (cin, w);

	for(int i=0; i<w.size(); i++)
	{
		if (s[w]==s[i])		x++;
	}
}