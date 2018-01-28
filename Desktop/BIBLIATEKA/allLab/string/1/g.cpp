#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string ss;



int main()
{
	int w=0;
	char c[1111];
	string s;

	cin>>s;


	for(int i=s.size()-1; i>=0; i--){
		c[w]=s[i];
		ss=ss+c[w];
		w++;
	}

	

	cout<<ss;
	

	return 0;
}