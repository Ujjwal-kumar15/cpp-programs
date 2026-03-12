#include<iostream>
using namespace std;
 
main(){
    int p=50;
    int b;
    cout<<"no of pushup :";
    cin>>b;

    while(b>=0){
        if(b!=p){
        cout<<"Never give up! Keep it on"<<endl;
        cout<<"no of pushup :";
        cin>>b;
        }

        else{
            cout<<"you may go now ";
            break;
        }
    }
}
