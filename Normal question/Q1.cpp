#include <iostream>
using namespace std;
main(){
    // Is a number Prime or not?
    int n,i=2;
    cout<<"Enter Number:";
    cin>>n;
    
    while(i<n){
        if(n%i==0){
            cout<<n<<" is non-prime.";
            return 0;
            } 
        i+=1;
    }
    cout<<n<<" is Prime.";
}