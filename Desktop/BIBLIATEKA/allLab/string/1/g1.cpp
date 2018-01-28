#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int w=0;
	cin>>s;

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

	return 0;
}