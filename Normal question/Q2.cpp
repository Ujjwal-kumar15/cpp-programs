#include <iostream>
using namespace std;
main(){
    int n,i=1,A=1;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=n){
        A=A*i;
        i+=1;
    }
    cout<<A;
}