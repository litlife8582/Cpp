#include<iostream>
#include<iomanip>
using namespace std;

class Shop{
    public:
    double sales;
    static double total;
    
    Shop(){
        sales=0.00;
    }
    
    void getSales(double s){
        sales=s;
    }
    
    void totalSales(){
        total+=sales;
    }
};

double Shop::total=0.00;

int main(){
    int n;
    double s;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        cin>>s;
        Shop sa;
        sa.getSales(s);
        sa.totalSales();
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Total Sales: "<<Shop::total;
    
    
    return 0;
}