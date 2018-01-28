#include <iostream>
#include <cmath>
#include <sstream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> split (string line)
{
	vector <int> res;
	stringstream ss;
	ss<<line;
	int x;

	while(ss>>x)
	{
		res.push_back(x);
	}
	return res;
}

int main()
{
	string s;
	int k=0;
	vector <int> w;
	set <int> sett;
	while (getline(cin, s))
	{
		w=split(s);
		for (int i = 0; i < w.size(); i++)
			sett.insert(w[i]);
	}

	 for(set<int>::iterator it = sett.begin(); it != sett.end(); it++)
	 {
	 	k=k+*it;

	 }
    cout << k;
	return 0;
}
