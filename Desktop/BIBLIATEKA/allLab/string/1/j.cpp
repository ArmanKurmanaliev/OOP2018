#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream a;
	string n;
	string q="";
	int b=0,x=0,y=0;
	getline(cin, n);

	a<<n;
	a>>q;
	a>>b;
	while(a>>q||a>>b)
	{
		if(q=="South") y=y-b;
		if(q=="North") y=y+b;
		if(q=="West") x=x-b;
		if(q=="East") x=x+b;
		b=0;
		q="";

 	}
 	cout<<x<<" "<<y;
 	return 0;
}
