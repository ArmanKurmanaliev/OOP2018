#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;








int main()
{
	string s;
	set <string> ss;

	while (getline (cin, s))
	{
		ss.insert(s);
	}

	for(set<string>::iterator it = ss.begin(); it!=ss.end(); it++)
	{
		cout<<*it<<" ";
	}

	return 0;

}