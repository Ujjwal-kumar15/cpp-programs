#include<iostream>
using namespace std;

main(){
    
    int pwd= 5213;
    int mypwd;

    do {
    cout<<"Enter pwd:";
    cin>>mypwd;
    }while(pwd!=mypwd);

    if(pwd=mypwd){
        cout<<"Unlocked";
    }

    
}