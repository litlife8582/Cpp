#include<iostream>
#include<iomanip>
using namespace std;

class Consumption{
    protected:
    double units;
    
    public:
    Consumption(double u):units(u){}
};

class Rate{
    protected:
    double residentialRate;
    double commercialRate;
    
    public:
    Rate(double rRate, double cRate):residentialRate(rRate),commercialRate(cRate){}
};

class ConnectionType{
    protected:
    string connectionType;
    
    public:
    ConnectionType(string type):connectionType(type){}
};

class ElectricityBill:public Consumption,public Rate,public ConnectionType{
    public:
    ElectricityBill(double u,double rRate,double cRate,string type):Consumption(u),Rate(rRate,cRate),ConnectionType(type){}
    
    double calculateTotalCost(){
        if(connectionType=="residential"){
            return units*residentialRate;
        }else if(connectionType=="commercial"){
            return units*commercialRate;
        }
        return 0.0;
    }
};

int main(){
    double units,residentialRate,commercialRate;
    string connectionType;
    
    cin>>units;
    cin>>residentialRate;
    cin>>commercialRate;
    cin>>connectionType;
    
    ElectricityBill bill(units, residentialRate, commercialRate, connectionType);
    
    double totalCost=bill.calculateTotalCost();
    cout<<fixed<<setprecision(2)<<totalCost<<endl;
    
    return 0;
}