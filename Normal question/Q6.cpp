#include <iostream>
#include <string>
using namespace std;

class Bank {
private: 
    double accNo;
    string name;
    double balance;
public:
    void createAccount() {
        cout<< "Enter Account Number: ";
        cin>> accNo;
        
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }
    void deposite() {
        float amt;
        cout<<"Enter amount to deposite: ";
        cin>>amt;
        balance+=amt;
        cout<<"Amount Deposited Successfully!\n";
    }
    void withdraw() {
        float amt;
        cout<<"Enter amount to withdraw: ";
        cin>>amt;
        if(amt>balance){
            cout<<"Insufficient Balance!\n";
        }else{
            balance-=amt;
            cout<<"Amount Withdraw Successfully!\n";
        }
    }
    void display(){
        cout<<"----Account Details----\n";
        cout<<"Account No: "<<accNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    Bank b;
    int choice;
    do{
        cout<<"====Bank Menu====\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposited\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Display Details\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your choice No.: ";
        cin>>choice;

        switch(choice) {
            case 1: b.createAccount(); break;
            case 2: b.deposite(); break;
            case 3: b.withdraw(); break;
            case 4: b.display(); break;
            case 5: cout<<"Thank you!\n";break;
            default: cout<<"Invalid choice!\n";
        }
    }while(choice!=5);

    return 0;
}