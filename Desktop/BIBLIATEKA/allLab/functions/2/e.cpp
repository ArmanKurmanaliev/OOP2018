#include <iostream>
using namespace std;

int main()
{
	string s;
	getline (cin, s);

	if(s.size()%2==0)
	{
		for (int i=0; i<s.size()/2-1; i++)
		{
			cout<<s[i]<<'(';
		}
		cout<<s[s.size()/2-1]<<s[s.size()/2];
		for(int i=s.size()/2+1; i<s.size(); i++)
		{
			cout<<')'<<s[i];
		}
	}

	else
	{
		for (int i=0; i<s.size()/2; i++)
		{
			cout<<s[i]<<'(';
		}
		cout<<s[s.size()/2];
		for(int i=s.size()/2+1; i<s.size(); i++)
		{
			cout<<')'<<s[i];
		}
	}
	return 0;
}

//	hello
//	h(e(