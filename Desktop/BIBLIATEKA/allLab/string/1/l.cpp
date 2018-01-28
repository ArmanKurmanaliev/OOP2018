#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);
	int a;
	cin>>a;

	for (int i=0; i<s.size(); i++)
	{
		if ((s[i]-a)<65)
		{
			s[i]+=26;
		}
		s[i]-=a;
	}
	cout<<s;
	return 0;
}