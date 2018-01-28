#include <bits/stdc++.h>
using namespace std;

vector <int> split (string line)
{
	vector <int> res;
	stringstream ss;
	ss<<line;
	int a;

	while (ss>>a)
	{
		res.push_back(a);
	}
	return res;
}