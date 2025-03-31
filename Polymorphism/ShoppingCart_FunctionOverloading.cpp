#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

class ShoppingCart{
    public:
    double calculateTotalPrice(double price){
        return price;
    }
    
    double calculateTotalPrice(double price,int quantity){
        return price*quantity;
    }
    
    double calculateTotalPrice(double price,int quantity,double discount){
        double total=price*quantity;
        double discountAmount=(total * discount)/100.0;
        return total-discountAmount;
    }
};


int main(){
    string line;
    ShoppingCart cart;
    while(getline(cin,line)){
        istringstream iss(line);
        int choice;
        double price,discount;
        int quantity;
        iss>>choice;
        
        switch(choice){
            case 1:
            iss>>price;
            cout<<fixed<<setprecision(2)<<cart.calculateTotalPrice(price)<<endl;
            break;
        
        case 2:
            iss>>price>>quantity;
            cout<<fixed<<setprecision(2)<<cart.calculateTotalPrice(price,quantity)<<endl;
            break;
        
        case 3:
            iss>>price>>quantity>>discount;
            cout<<fixed<<setprecision(2)<<cart.calculateTotalPrice(price,quantity,discount)<<endl;
            break;
        
        case 4:
            return 0;
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    return 0;
}