#include<iostream>
using namespace std;
// Calculator
main(){
    int A,B;
    char FNC;
    cout<< "Enter a number:";
    cin>>A>>FNC>>B;

    switch (FNC)
    {
    case '-':cout<<"Answer:";
      cout<<A-B;
      break;

    case '+':cout<<"Answer:";
        cout<<A+B;
        break;
    case '*':cout<<"Answer:";
         cout<<A*B;
         break;
    case '/':cout<<"Answer:";
         cout<<A/B;
         break;
    case '%':cout<<"Answer:";
         cout<<A%B;
         break;
         
    default:
       break;
        
    }

}
