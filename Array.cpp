/*Array : it is a collection of elements of the same datatype
that are stored sequentially in memory.*/

#include <iostream>
using namespace std;

 main(){
    int A[4] = {34,45,23,52,};
    for(int i=0;i<=3;++i){
         cout<<A[i]<<" ";
    }
    
    int B[4];
    cout<<"\nEnter Values: \n"; 
    for(int i=0;i<=3;i++){
        cin>>B[i];
    }
    for(int i=3; i>=0;i--){
        cout<<B[i]<<" ";
    }
    return 0;
}