#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int x=b/100;
	int s=0;

	for(double i=a; a<c; i=i+x){
		s++;
		i=ceil(i);
		cout<<i<<" ";
	}
	return 0;
}