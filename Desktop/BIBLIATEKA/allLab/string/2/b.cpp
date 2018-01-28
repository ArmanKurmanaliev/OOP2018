#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);
	int w=1;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==' ')
			w++;
	}
	cout<<w;
	return 0;
}