#include<iostream>
#include<string>
using namespace std;
int main()
{
	int c=0;
	string s,p;
	cin>>p>>s;
	for(int i=0;i<s.size()-p.size();i++)// 7 5
	{
		for(int j=i;j<p.size()+i;j++)//
		{
			if(p[j]==s[j])
			c++;
			cout<<c<<" ";
		}
		if(c==p.size()) 
		{
			cout<<"yes";
			return 0;
		}
		else c=0;
		cout<<c<<endl;
	}
	cout<<c;
	return 0;
}
