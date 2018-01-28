#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

vector <int> split (string line)
{
	vector <int> res;
	stringstream ss;
	ss<<line;
	int x;

	while (ss>>x)
	{
		res.push_back(x);
	}
	return res;
}

int ispr (int a)
{
	int q=0;
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
		{
			q++;
			break;
		}
	}
	return q;
}

int main()
{
	string s;
	vector <int> v;

	while (getline(cin, s))
	{
		if(s=="stop")
		{
			return 0;
		}
		v=split(s);
		for (int i = 0; i < v.size(); i++)
		{
			if (ispr(v[i]) == 1)
			{
				cout << v[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}