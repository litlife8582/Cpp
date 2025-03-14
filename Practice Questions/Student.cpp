/*Create a class Student with data members - Register number, name and age. 
Create another class Exam that inherits Student class with a data member 
“Marks” – an array to hold marks in 6 subjects. Create another class called 
Sports with data member – Sport name and Score. Derive another class Result 
that inherits from both Exam and Sports. The Result class should have a method 
to determine the eligibility of the student to be admitted into a course. If 
the average of marks in 6 subjects and sports score is greater than 75, then 
display “The student is eligible” else display “The student is not eligible”. 
Include appropriate get and display methods in each of the classes. Write a 
main function to test the above.*/

#include<iostream>
using namespace std;

class Student{
    private:
    int regno;
    string name;
    int age;

    public:
    Student(int regno,string name,int age){
        this->regno=regno;
        this->name=name;
        this->age=age;
    }

};

class Exam:public Student{
    private:
    int arr[6];

    public:
    Exam(int a,int b,int c,int d,int e,int f){
        this->arr[6]={a,b,c,d,e,f};
    }
};

