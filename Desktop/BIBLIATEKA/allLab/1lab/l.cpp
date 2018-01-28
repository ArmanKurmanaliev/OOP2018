#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cin>>a;
    a=a%1440;
    cout<<a/60<<" "<<(a-(a/60*60));
    return 0;
}