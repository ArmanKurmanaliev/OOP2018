#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int s=0;
	b=((b/100)+1);

	for (double i=a; i<c; i=i*b){
	int c=(int (i));
	s++;
}
	cout<<s;
	return 0;
}