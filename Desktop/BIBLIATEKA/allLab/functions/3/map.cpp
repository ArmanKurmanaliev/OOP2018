#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <map>
using namespace std;

int main()
{
	map <string, int> m;
	string s;
	int a;

	while (cin>>s)
	{
		m[s]++;
	}


	for (map <string, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;

}