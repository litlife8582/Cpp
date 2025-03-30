#include<iostream>
#include<iomanip>
using namespace std;

class SimpleInterest{
  public:
  double Principal,Rate,SI;
  int Time;
  
  SimpleInterest(){
      Principal=0;
      Rate=0;
      Time=0;
      SI=0;
  }
  
  SimpleInterest(double p,double r,int t){
      Principal=p;
      Rate=r;
      Time=t;
  }
  
  void calcSI(){
      SI=Principal*Rate*Time/100.0;
      cout<<fixed<<setprecision(2);
      cout<<SI;
  }
  
};

int main(){
    double p,r;
    int t;
    cin>>p;
    cin>>r;
    cin>>t;
    SimpleInterest si(p,r,t);
    si.calcSI();
    return 0;
}