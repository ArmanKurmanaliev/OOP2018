#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	set <string> sack;

	while (cin >> s)
	{
		sack.insert(s);
	}

	for (set <string>::iterator it = sack.begin(); it != sack.end(); it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}