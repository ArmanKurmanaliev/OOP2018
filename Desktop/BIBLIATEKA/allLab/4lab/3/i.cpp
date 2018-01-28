#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int i;
    cin>>i;
    int m=i;
    int s=1;
    while (i!=0) {
    cin>>i;
    if (i>m) {
        m=i;
        s=0;
        s++;
    }
    else if (i==m) {
        s++;
    }
    }
    cout<<s;
 
    return 0;
}
