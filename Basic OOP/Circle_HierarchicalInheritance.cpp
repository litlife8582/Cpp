#include<iostream>
#include<iomanip>
using namespace std;

class Circle{
    public:
    double radius;
};

class Class1:public Circle{
    public:
    double circumference(){
        float circum=2*3.14159*radius;
        return circum;
    }
};

class Class2:public Circle{
    public:
    double circumference(){
        float circum=23.14*radius;
        return circum;
    }
};

int main(){
    Class1 c1;
    Class2 c2;
    float r;
    cin>>r;
    c1.radius=r;
    c2.radius=r;
    
    cout<<fixed<<setprecision(2);
    cout<<"Class 1: "<<c1.circumference()<<endl;
    cout<<"Class 2: "<<c2.circumference()<<endl;
    return 0;
}
