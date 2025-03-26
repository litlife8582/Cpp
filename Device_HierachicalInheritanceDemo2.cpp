#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Device{
    public:
    string brand;
    double price;
    
    void setDeviceDetails(string b, double p){
        brand=b;
        price=p;
    }
    
    void display(bool isFridge=false){
        cout<<"Device: "<<brand<<", Price: $"<<fixed<<setprecision(isFridge?1:2)<<price<<endl;
    }
};

class Television: public Device{
    public:
    int screenSize;
    int resolutionWidth, resolutionHeight;
    
    void setTelevisionDetails(int s,int w, int h){
        screenSize=s;
        resolutionWidth=w;
        resolutionHeight=h;
    }
    
    double calculatePixelDensity(){
        double screenSizeCm=screenSize*2.54;
        return (resolutionWidth*resolutionHeight)/(screenSizeCm * screenSizeCm);
    }
    
    void display(){
        cout<<"Television Information:"<<endl;
        Device::display();
        double screenSizeCm=screenSize*2.54;
        cout<<"Screen Size: "<<screenSize<<" inches ("<<fixed<<setprecision(1)<<screenSizeCm<<" cm)"<<endl;
        cout<<"Pixel Density: "<<fixed<<setprecision(1)<<calculatePixelDensity()<<" pixels per square centimeter"<<endl;
    }
};

class Refrigerator:public Device{
    public:
    int capacityLiters;
    double energyConsumption;
    
    void setRefrigeratorDetails(int c,double e){
        capacityLiters=c;
        energyConsumption=e;
    }
    
    double calculateEnergyEfficiency(){
        double capacityCubicFeet=capacityLiters*0.0353;
        return energyConsumption/capacityCubicFeet;
    }
    
    void display(){
        cout<<"\nRefrigerator Information:"<<endl;
        Device::display(true);
        double capacityCubicFeet=capacityLiters*0.0353;
        cout<<"Capacity: "<<capacityLiters<<" liters ("<<fixed<<setprecision(1)<<capacityCubicFeet<<" cubic feet)"<<endl;
        cout<<"Energy Efficiency: "<<fixed<<setprecision(1)<<calculateEnergyEfficiency()<<" kWh per cubic foot"<<endl;
    }
};

int main(){
    string tvBrand,fridgeBrand;
    double tvPrice,fridgePrice;
    int tvScreenSize,fridgeCapacity;
    int resolutionWidth, resolutionHeight;
    double fridgeEnergyConsumption;
    
    cin>>tvBrand>>tvPrice>>tvScreenSize;
    cin>>fridgeBrand>>fridgePrice>>fridgeCapacity;
    cin>>resolutionWidth>>resolutionHeight;
    cin>>fridgeEnergyConsumption;
    
    Television tv;
    Refrigerator fridge;
    
    tv.setDeviceDetails(tvBrand, tvPrice);
    tv.setTelevisionDetails(tvScreenSize,resolutionWidth,resolutionHeight);
    
    fridge.setDeviceDetails(fridgeBrand,fridgePrice);
    fridge.setRefrigeratorDetails(fridgeCapacity,fridgeEnergyConsumption);
    
    tv.display();
    fridge.display();
    
    return 0;
    
}