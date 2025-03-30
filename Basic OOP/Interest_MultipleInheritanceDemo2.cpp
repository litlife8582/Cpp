#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Principal{
    protected:
    double price;
    public:
    void getPrice(double p){
        price=p;
    }
};

class InterestRate{
    protected:
    double rate;
    public:
    void getRate(double r){
        rate=r;   
    }
};

class Loan:public Principal,public InterestRate{
    public:
    int year;
    double interest;
    
    void getYear(int y){
        year=y;
    }
    
    double Return(){
        interest=price*rate*year;
        return interest;
    }
    
};

int main(){
    Loan l;
    double p,r;
    int y;
    cin>>p;
    cin>>r;
    cin>>y;
    l.getPrice(p);
    l.getRate(r);
    l.getYear(y);
    cout<<fixed<<setprecision(2);
    cout<<"Total interest paid: Rs."<<l.Return();
    return 0;
}
