#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int w=0;
	getline(cin,s);

	for (int i=0; i<s.size(); i++)
	{
		if(s[i]==' ') \
			{s.erase(i,1);
				i--;
			}
	}

	for(int i=0; i<s.size(); i++)
	{
		if (s[i]==s[s.size()-1-i])	w++;
	}

	if(w==s.size())
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
//	cout<<s;
	return 0;
}