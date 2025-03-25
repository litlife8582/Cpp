#include<iostream>
using namespace std;

class Triangle{
    protected:
    int side1;
    int side2;
    int side3;
    
    public:
    
    void takeInput(){
        cin>>side1;
        cin>>side2;
        cin>>side3;
    }
    
    void output(){
        if(side1==side2 && side2==side3){
            cout<<"Equilateral triangle";
        }else if(side1==side2 || side1==side3){
            cout<<"Isosceles triangle";
        }else{
            cout<<"Scalene triangle";
        }
    }
};

int main(){
    Triangle t;
    t.takeInput();
    t.output();
    return 0;
}