#include<iostream>
using namespace std;

class Demo{
  public:
  static int x;
  static int y;
  
  Demo(){
      x=10;
      y=20;
    }
  
  void get(int a,int b){
      x=a;
      y=b;
    }
  
  void fun(){
      cout<<"Value of X: "<<x<<endl;
      cout<<"Value of Y: "<<y<<endl;
    }
  
};

int Demo::x=0;
int Demo::y=0;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    Demo d;
    d.fun();
    d.get(a,b);
    d.fun();
}