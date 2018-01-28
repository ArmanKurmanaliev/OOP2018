#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double a, b, c, l, s;
    cin >>a>>b>>c;
    l=a-b;
    s=b-c;
    cout<<ceil(l/s)+1;
    return 0;
}