/* Create a class named Shape with a function that prints "This is a shape". Create
 another class named Polygon inheriting the Shape class with the same function that
 prints "Polygon is a shape". Create two other classes named Rectangle and Triangle
 having the same function which prints "Rectangle is a polygon" and "Triangle is a
 polygon" respectively. Again, make another class named Square having the same
 function which prints
 "Square is Now, try calling the function by the object of each of these classes.
 rectangle".*/

 #include<iostream>
 #include<string>
 using namespace std;

 class Shape{
    public:
    string txt;
    void printShape(string txt){
        cout<<txt<<endl;
    }
};

class Polygon:public Shape{
};

class Rectangle:public Shape{
};

class Triangle:public Shape{
};

class Square: public Shape{
};

int main(){
    Shape shape;
    Polygon poly;
    Rectangle rec;
    Triangle tri;
    Square sqr;

    shape.printShape("This is a shape");
    poly.printShape("Polygon is a shape");
    rec.printShape("Rectangle is a polygon");
    tri.printShape("Triangle is a polygon");
    sqr.printShape("Square is a subclass of rectangle");

    return 0;
}