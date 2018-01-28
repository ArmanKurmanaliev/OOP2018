#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string w;

	cin>>s;
	cin>>w;

	int cnt=0;

	for(int i=0; i<100100; i++)
	{
		if(s.find(s)!=string::npos)
		{
			cnt++;
			s.erase(s.find(w), s.size());
		}
		else
		{
			break;
		}
	}
	cout<<cnt;
}