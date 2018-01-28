#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	vector <int> v;
	int n;
	set <int> s;

	while (cin>>n)
	{
		s.insert(n);
	}
	cout<<s.size();
	return 0;
}