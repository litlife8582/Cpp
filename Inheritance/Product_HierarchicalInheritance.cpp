#include<iostream>
#include<iomanip>
using namespace std;

class Product{
    public:
    float cost,discount;
    
    void get(){
        cin>>cost;
        cin>>discount;
    }
};

class ElectronicGadget:public Product{
    public:
    void calcTotalIE(){
        cout<<fixed<<setprecision(2);
        cout<<"Electronic Cost: Rs. "<<cost-(cost*discount)<<endl;
    }
};

class MechanicalDevice:public Product{
    public:
    void calcTotalIM(){
        cout<<fixed<<setprecision(2);
        cout<<"Mechanical Cost: Rs. "<<cost-(cost*discount)<<endl;
    }
};

int main(){
    ElectronicGadget e;
    MechanicalDevice m;
    
    e.get();
    m.get();
    
    e.calcTotalIE();
    m.calcTotalIM();
    
    return 0;
}