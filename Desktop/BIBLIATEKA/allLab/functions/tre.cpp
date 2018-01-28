#include <iostream>
using namespace std;

char b;

int main()
{
	string s;
	getline(cin, s);
	int a=0;
	string d;

	for(int i=0; i<s.size()-1; i++){
		for(int j=i+1; j<s.size(); j++){
			if(s[j]==s[i]){
				d[i+j];
				a++;
			}
		}
	}
	if(a>2){
		cout<<d;
	}
	return 0;
}