#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Investment{
  public:
  float p,r;
  int t;
  
  void getCred(){
      cin>>p;
      cin>>r;
      cin>>t;
  }
};

class FixedDeposit: public Investment{
    public:
    float m;
    
    void calculateMaturityAmount(){
        m=p*pow((1+(r/100.0)),t);
        cout<<fixed<<setprecision(2);
        cout<<"Maturity Amount: "<<m<<endl;
    }
};

class SimpleInterest:public FixedDeposit{
  public:
  float si;
  
  void calculateSimpleInterest(){
      si=p*r*t/100.0;
      cout<<fixed<<setprecision(2);
      cout<<"Simple Interest: "<<si<<endl;
  }
};


int main(){
    SimpleInterest s;
    s.getCred();
    s.calculateMaturityAmount();
    s.calculateSimpleInterest();
    return 0;
}