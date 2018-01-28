#include <iostream>
 
using namespace std;
 
int main(){
    int i,s=0;
    int b;
    cin >> i;
    b=i;
 
    while (i!=0) {
       
        cin>>i;
        if (i>b) s++;
        b=i;
    } cout<<s;
    return 0;
}
