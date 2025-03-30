#include<iostream>
#include<iomanip>
using namespace std;

class Order{
    public:
    float price,discount;
    int quantity;
    
    void getPrice(){
        cin>>price;
        cin>>quantity;
        cin>>discount;
    }
};

class FinalOrder:public Order{
    public:
    float tc;
    
    void totalCost(){
        tc=(price*quantity)-(price*quantity*discount/100.0);
        cout<<fixed<<setprecision(2);
        cout<<"Total Cost: "<<tc<<endl;
    }
};

class DiscountedOrder:public FinalOrder{
    public:
    float ad,fc;
    
    void getAdditionalDiscount(){
        cin>>ad;
    }
    
    void finalCost(){
        fc=tc-(tc*ad/100.0);
        cout<<fixed<<setprecision(2);
        cout<<"Final Cost: "<<fc<<endl;
    }
};

int main(){
    DiscountedOrder d;
    d.getPrice();
    d.getAdditionalDiscount();
    d.totalCost();
    d.finalCost();
    return 0;
}