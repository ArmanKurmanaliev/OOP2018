#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, y;
	cin>>a>>y;
	int s=1;

	for (double i=a; i<y; i=i+(i*0.1)){
		s++;
		}
		cout<<s<<" ";
	return 0;
}