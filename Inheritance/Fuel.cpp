#include<iostream>
#include<iomanip>

class Vehicle{
  public:
  double fuelEfficiency, maxCapacity;
  
  Vehicle(double fuelEfficiency, double maxCapacity)
  :fuelEfficiency(fuelEfficiency),maxCapacity(maxCapacity){}
};

class Car:public Vehicle{
  public:
  double maxRange;
  
  Car(double fuelEfficiency,double maxCapacity)
  :Vehicle(fuelEfficiency,maxCapacity){
      maxRange=fuelEfficiency*maxCapacity;
  }
};

class EmilyCar:public Car{
    public:
    double payloadCapacity,fullyLoadedWeight;
    
    EmilyCar(double fuelEfficiency,double maxCapacity)
    :Car(fuelEfficiency,maxCapacity){
        payloadCapacity=0.8*maxCapacity;
        fullyLoadedWeight=payloadCapacity+maxRange;
    }
    
    void displayStats(){
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"Maximum Range: "<<maxRange<<" km\n";
        std::cout<<"Payload Capacity: "<<payloadCapacity<<" kg\n";
        std::cout<<"Fully loaded Weight: "<<fullyLoadedWeight<<" kg\n";
    }
};

int main(){
    double fuelEfficiency,maxCapacity;
    std::cin>>fuelEfficiency;
    std::cin>>maxCapacity;
    
    EmilyCar emilyCar(fuelEfficiency,maxCapacity);
    emilyCar.displayStats();
    
    return 0;
}