#include<iostream>
using namespace std;

int Dec_to_Bin(int n){
    int pow = 1;
    int ans=0;
    while(n>0){
        int rem = n%2;
        n=n/2; 
        ans+=(rem*pow);
        pow*=10;
    } 
    return ans;
}
int Bin_to_Dec(int n){
    int ans = 0,pow = 1;
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    cout<<Dec_to_Bin(2186)<<endl;
    cout<<Bin_to_Dec(0b100100101010101010101010101010)<<endl;

}