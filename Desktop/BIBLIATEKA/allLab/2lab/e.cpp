#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int x,i,q=2;
 
    cin >> x >> i;
    int n = pow ( q , i );
    int a = ( x ^ n );
    cout << a << endl;
    return 0;
}