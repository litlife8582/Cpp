#include<iostream>
#include<iomanip>
using namespace std;

class Area{
    private:
    int side,length,breadth;
    float radius,base,height;
    
    public:
    void get();
    
    inline void squareArea();
    
    inline void rectangleArea();
    
    inline void circleArea();
    
    inline void parallelogramArea();
};

    void Area::get(){
       cin>>side>>length>>breadth>>radius>>base>>height;
    }
    
    inline void Area::squareArea(){
        int sqArea=side*side;
        cout<<"Area of the square: "<<sqArea<<endl;
    }
    
    inline void Area::rectangleArea(){
        int recArea=length * breadth;
        cout<<"Area of the rectangle: "<<recArea<<endl;
    }
    
    inline void Area::circleArea(){
        float cirArea=3.14*radius*radius;
        cout<<fixed<<setprecision(2);
        cout<<"Area of the circle: "<<cirArea<<endl;
    }
    
    inline void Area::parallelogramArea(){
        float parArea=base*height;
        cout<<fixed<<setprecision(2);
        cout<<"Area of the parallelogram: "<<parArea<<endl;
    }

int main(){
    Area a;
    a.get();
    a.squareArea();
    a.rectangleArea();
    a.circleArea();
    a.parallelogramArea();
    return 0;
}
