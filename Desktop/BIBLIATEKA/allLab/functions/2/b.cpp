#include <iostream>
using namespace std;


int main()
{
	string s;
	getline (cin, s);
	char max=s[0];

	for (int i=1; i<s.size(); i++)
	{
		if (s[i]>max){
			max=s[i];
			}
	}
	cout<<max;
//	cout<<s[s.size()];
	return 0;
}