#include <iostream>
#include <string>
using namespace std;

class Shop{
public:
    string Itemname,code;
    double price;
    double displaybill(double p){
        this->price = p;
        return price;
    }
};
int main(){
    system("cls");
    Shop s1;
    s1.Itemname = "chips";
    s1.code = 2;
    cout<<s1.Itemname <<"price: "<<s1.displaybill(55.50);
}