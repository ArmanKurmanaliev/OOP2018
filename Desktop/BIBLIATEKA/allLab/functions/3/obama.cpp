#include <iostream>
#include <cmath>
#include <sstream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int max=0;
	int min=1000000;

	int cnt1=0;
	int cnt2=0;


	while (cin >> s)
	{
		if (s.size()>max)
		{
			max=s.size();
			cnt1=0;

		}
		if (s.size()<min)
		{
			min=s.size();
			cnt2=0;
		}
		if(s.size()==max)
		{
			cnt1++;
		}
		if(s.size()==min)
		{
			cnt2++;
		}
	}

	cout<<cnt1<<" "<<cnt2;
	return 0;
}