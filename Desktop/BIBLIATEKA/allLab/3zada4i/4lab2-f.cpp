#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int s=0;

	double i=a;
	while (i<c){
		i=i*1.1;
		i=(int (i));
		s++;
	}
	cout<<s;
	return 0;
}