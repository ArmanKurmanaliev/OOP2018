#include <iostream>
#include <string>
using namespace std;

string ss;

int main()
{
	string s;
	getline(cin,s);
	int a=0;
	int b=0;
	int w=0;

	for (int i=0; i<s.size(); i++)
	{

		if(s[i]!=' ')
		{
			ss[i]+=s[i];
			a++;
		}
		if(a>b)		b=a;
	}

	cout<<ss[i]<<endl<<b;

	return 0;
}