#include<iostream>
#include<iomanip>
using namespace std;

class UnitConverter{
    public:
    
    double convert(double millimetres){
        return millimetres/10.0;
    }
    
    double convert(int unitType,double value){
        if(unitType==2){
            return value/1000000.0;
        }
        return -1;
    }
};

int main(){
    int unitType;
    double value;
    cin>>unitType;
    
    if(unitType!=1 && unitType!=2){
        cout<<"Invalid unit type!"<<endl;
        return 0;
    }
    
    cin>>value;
    UnitConverter converter;
    double result;
    
    if(unitType==1){
        result=converter.convert(value);
        cout<<fixed<<setprecision(2)<<result<<" cm"<<endl;
    }else if(unitType==2){
        result=converter.convert(unitType,value);
        cout<<fixed<<setprecision(2)<<result<<" km"<<endl;
    }
    
    return 0;
}