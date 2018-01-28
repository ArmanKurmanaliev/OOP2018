#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int i;
    int s=0;
    int k=0;
    while (k!=2) {
        cin>>i;
        if (i==0) k++;
        else {
            s+=i;
            k=0;
        }
    }
    cout<<s;
    return 0;
}

