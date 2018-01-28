#include <iostream>
using namespace std;
int main()
{
    int e,i,c,d,a,b;
    cin>>a>>b>>c>>d;
    int s=0;
for(i=0;i<=1000;i++)
{
    if((a*i*i*i+b*i*i+c*i+d)/(i-e)==0)
    s++;
}
	cout<<s;
    return 0;
}