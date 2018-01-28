#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline (cin, s);

	cout<<s[2]<<endl;
	cout<<s[s.size()-2]<<endl;
	
	for (int i=0; i<5; i++)
	{
		cout<<s[i];
	}
	cout<<endl;

	for (int i=0; i<s.size()-2; i++)
	{
		cout<<s[i];
	}
	cout<<endl;

	for (int i=0; i<s.size(); i++)
	{
		if(i%2==0)
			cout<<s[i];
	}
	cout<<endl;

	for (int i=1; i<s.size(); i++)
	{
		if(i%2!=0)
			cout<<s[i];
	}
	cout<<endl;

	for(int i=s.size()-1; i>=0; i--)
	{
		cout<<s[i];
	}
	cout<<endl;

	for (int i=s.size()-1; i>=0; i-=2)
	{
		cout<<s[i];
	}
	cout<<endl;
	cout<<s.length();


	return 0;
}