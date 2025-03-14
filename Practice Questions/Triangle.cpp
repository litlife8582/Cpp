/*Design a class named triangle. Develop the C++ program that creates two triangle
objects incorporating the following requirements: 
    1.A no-argument constructor to initalize data members.
    2.A parameterized constructor to initialze the data members.
    3.Incorporate setData() and getData() functions to get input values and 
    display the data fields respectively.
    4.Two member functios named getArea() and getPerimeter() that returns area
    and perimeter of the triangle
    
    A= sqrt[s(s−a)(s−b)(s−c)]*/

#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
    private:
    int side1,side2,side3;

    public:
    Triangle(){
        this->side1=0;
        this->side2=0;
        this->side3=0;
    }

    void setData(int a,int b,int c){
        side1=a;
        side2=b;
        side3=c;
    }

    void getdata(){
        cout<<"The data output for the traingle\n";
        cout<<"Side 1: "<<side1<<endl;
        cout<<"Side 2: "<<side2<<endl;
        cout<<"Side 3: "<<side3<<endl;
    }

    

    double getPerimeter(){
        double perimeter=side1+side2+side3;
        return perimeter;
    }
    
    void displayPerimeter(double perimeter){
        cout<<"Perimeter: "<<perimeter<<endl;
    }

    double getArea(){
        double s=getPerimeter()/2;
        double area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return area;
    }    

    void displayArea(double area){
        cout<<"Area: "<<area<<endl;
    }
};

int main(){
    Triangle t1;
    Triangle t2;
    int a1,b1,c1,a2,b2,c2;
    cout<<"Enter the details of triangle 1:\n";
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cout<<"Enter the details of triangle 2:\n";
    cin>>a2;
    cin>>b2;
    cin>>c2;

    t1.setData(a1,b1,c1);
    t2.setData(a2,b2,c2);

    cout<<"Details of triangle 1 is: "<<endl;
    t1.getdata();
    t1.displayPerimeter(t1.getPerimeter());
    t1.displayArea(t1.getArea());

    cout<<"Details of triangle 2 is: "<<endl;
    t2.getdata();
    t2.displayPerimeter(t2.getPerimeter());
    t2.displayArea(t2.getArea());

    return 0;
}