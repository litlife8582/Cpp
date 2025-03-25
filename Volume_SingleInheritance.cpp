#include<iostream>
#include<iomanip>
using namespace std;

class Circle{
  protected:
  float radius;
  
  public:
  
  Circle(float r){
      radius=r;
  }
};

class Cylinder: public Circle{
    private:
    float height;
    
    public:
    float volume;
    
    Cylinder(float r, float h):Circle(r){
        height=h;
    }
    
    float Volume(){
        float volume=3.14*radius*radius*height;
        return volume;
    }
};

int main(){
    float r,h;
    cin>>r;
    cin>>h;
    Cylinder c(r,h);
    cout<<fixed<<setprecision(2);
    cout<<c.Volume();
    return 0;
}


