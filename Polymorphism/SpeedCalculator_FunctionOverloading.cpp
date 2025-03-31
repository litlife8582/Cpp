#include<iostream>
#include<iomanip>
using namespace std;

class SpeedCalculator{
    public:
    double calculateSpeed(double distance,double time){
        return distance/time;
    }
    
    double calculateSpeed(double distance,double time,double acceleration){
        return (distance/time)+(acceleration*time);
    }
};

int main(){
    double distance,time,trainAcceleration,planeAcceleration;
    cin>>distance>>time>>trainAcceleration>>planeAcceleration;
    
    SpeedCalculator calculator;
    
    double carSpeed=calculator.calculateSpeed(distance,time);
    cout<<fixed<<setprecision(2)<<carSpeed<<endl;
    
    double trainSpeed=calculator.calculateSpeed(distance,time,trainAcceleration);
    cout<<fixed<<setprecision(2)<<trainSpeed<<endl;
    
    double planeSpeed=calculator.calculateSpeed(distance,time,planeAcceleration);
    cout<<fixed<<setprecision(2)<<planeSpeed<<endl;
    
    return 0;
}