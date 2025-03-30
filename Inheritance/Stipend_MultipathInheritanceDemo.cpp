#include<iostream>
#include<iomanip>
using namespace std;

class Person{
  public:
  string name;
  int age;
  
  void get1(){
      cin>>name;
      cin>>age;
  }
};

class Student:virtual public Person{
  public:
  
  float calculateStipend(){
      return float(age*100.0);
  }
};

class Employee:virtual public Person{
  public:
  
  float calculateSalary(){
      return float(age*500.0);
  }
};

class TeachingAssistant:public Student,public Employee{
  public:
  char s;
  
  void get(){
      cin>>s;
  }
  
  void display(){
      if(s=='S'){
          cout<<fixed<<setprecision(2);
          cout<<name<<"'s Income: Rs. "<<calculateStipend()<<endl;
      }else if(s=='E'){
          cout<<fixed<<setprecision(2);
          cout<<name<<"'s Income: Rs. "<<calculateSalary()<<endl;
      }else{
          cout<<"Invalid status!";
      }
  }
};

int main(){
    TeachingAssistant t;
    t.get1();
    t.get();
    t.display();
}