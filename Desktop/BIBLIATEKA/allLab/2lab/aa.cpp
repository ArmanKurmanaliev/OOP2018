#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double k, n;
    double d;
    cin>>k>>n;
    d=ceil (n/k);
   
    if (n<=k){
        cout<<'1'<<" "<<n;
    } else if(n>k) {
        cout<<d<<" "<<n-(k*(d-1));
    }
   
   
    return 0;
}