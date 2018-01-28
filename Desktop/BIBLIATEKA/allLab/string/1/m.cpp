#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char w[1];
	getline (cin, s);
	int a, b;
	cin>>a>>b;

	for (int i=0; i<s.size(); i++){
		for (int j=0; j<s.size(); j++){
			if ((i==a) && (j==b)){
				w==s[i];
				s[i]==s[j];
				s[j]==w;
			}
		}
	}
	cout<<s;
	return 0;
}