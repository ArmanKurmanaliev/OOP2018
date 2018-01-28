#include <iostream>
using namespace std;
 
int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    cout<<((a*n*100)+(b*n))/100<<" "<<((a*n*100)+(b*n))%100;
    return 0;
}