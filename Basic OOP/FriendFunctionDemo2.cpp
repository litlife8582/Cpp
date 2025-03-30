#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    Rectangle(int a,int b){
        this->length=a;
        this->breadth=b;
    }
    
    friend void calcArea(Rectangle s);
};

void calcArea(Rectangle s){
    int area=s.length*s.breadth;
    cout<<area;
}

int main(){
    int l,b;
    cin>>l;
    cin>>b;
    Rectangle s(l,b);
    calcArea(s);
    return 0;
}