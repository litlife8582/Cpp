#include<iostream>
#include<iomanip>
using namespace std;

class Product{
    public:
    string name;
    double price;
    int quantity;
    double cost;
    
    void get(){
        cin>>name;
        cin>>price;
        cin>>quantity;
    }
    
    void calculateCost(){
        cost=price*quantity;
    }
};

class Electronics:virtual public Product{
    public:
    void calculateEleccost(){
        if(quantity>=3){
           cost*=0.9; 
        }
    }
};

class Clothing:virtual public Product{
    public:
    void calculateClothcost(){
        if(quantity>=5){
           cost*=0.95; 
        }
    }
};

class OrderCalculator:public Electronics, public Clothing{
    public:
    
    double calculateTotalCost(){
        return cost;
    }
};

int main(){
    OrderCalculator o1,o2;
    o1.get();
    o2.get();
    
    o1.calculateCost();
    o1.calculateEleccost();
    
    double elecCost=o1.calculateTotalCost();
    
    o2.calculateCost();
    o2.calculateClothcost();
    
    double clothCost=o2.calculateTotalCost();
    
    cout<<fixed<<setprecision(2);
    cout<<"Total Order Cost: Rs. "<<elecCost+clothCost<<endl;
    
    return 0;
}