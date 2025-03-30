#include<iostream>
#include<iomanip>
using namespace std;

int a,b;
class Parent{
    public:
    void add(int a,int b){
      cout<<a+b<<endl;
  }
};

class child1{
  public:
  void sub(int a,int b){
      cout<<a-b<<endl;
  }
};

class child2{
    public:
    void mul(int a,int b){
        cout<<a*b<<endl;
    }
};

class child3:public Parent,public child1,public child2{
  public:
  
  void get(){
      cin>>::a>>::b;
  }
  
  void divi(int a,int b){
      cout<<fixed<<setprecision(2);
      cout<<float(a*1.0/b)<<endl;
  }
  
};

int main(){
    child3 c;
    c.get();
    c.add(a,b);
    c.sub(a,b);
    c.mul(a,b);
    c.divi(a,b);
    return 0;
}