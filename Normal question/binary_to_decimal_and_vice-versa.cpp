#include<iostream>
using namespace std;

long long Dec_to_Bin(int n){
    long long pow = 1;
    long long ans=0;
    while(n>0){
        int rem = n%2;
        n=n/2; 
        ans+=(rem*pow);
        pow*=10;
    } 
    return ans;
}
long long Bin_to_Dec(int n){
    long long ans = 0,pow = 1;
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    cout<<Dec_to_Bin(85 )<<endl;
    cout<<Bin_to_Dec(1010101)<<endl;

}