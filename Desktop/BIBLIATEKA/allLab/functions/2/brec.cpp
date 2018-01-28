#include <iostream>
using namespace std;

char highnum(string a)
{
	char max=a[0];

	for (int i=1; i<a.size(); i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

int main()
{
	string s;
	getline (cin, s);

	cout<<highnum(s);
	return 0;
}