#include <iostream>
using namespace std;
main(){
    int n=3;
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch--;
        }
        ch =ch+i+1;
        cout<<endl;
        
    }
    int num=1;
    for(int i=1;i<=n;i++){
        cout<<"   ";
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

}