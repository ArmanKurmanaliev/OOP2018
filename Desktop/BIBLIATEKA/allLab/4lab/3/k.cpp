#include <iostream>
 
using namespace std;
 
int main(){
    int i;
    cin>>i;
    int d=i;
    int s=1;
    int m=0;
    while (i!=0) {
        cin>>i;
        if (d==i) s++;
        else {
        d=i;           
        s=1;
        } if (s>m) {
            m=s;
        }
    }
    cout<<m;
    return 0;
}
