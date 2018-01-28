#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char w;
	int n=0;

	getline(cin, s);
	cin>>w;

	for(int i=0; i<s.size()-1; i++)
	{
		if s[i]
		if (s[i]==w){
			n++;
		}
	}
	cout<<n;
	return 0;
}