#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	string s;
	cin>>a;
	for (int i=0; i<a; i++){
		cin>>s;
		{
			for(int j=0; j<s.size(); j++){
				if(s.size()<=10){
					string q;
					q[j]+=s[j];
				}
			}
		}
	}
	cout<<q;

	return 0;
}