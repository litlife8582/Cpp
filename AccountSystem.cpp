/*Account System:
Type: Hierarchical + Multilevel Inheritance
Design a banking system with the following:
Class Account: base class with account number, name, balance.
Class SavingsAccount: inherits Account, adds interest rate.
Class CurrentAccount: inherits Account, adds overdraft limit.
Class PremiumSavings: inherits from SavingsAccount, adds loyalty bonus.
Tasks:
Override the calculateInterest() method differently for each class.
Use super to access parent class methods.
Show polymorphic behavior via an Account reference*/

#include<iostream>
#include<string>
using namespace std;

class Account{
    protected:
    int acc;
    string name;
    float bal;

    public:
    virtual void get(){
        cout<<"Enter account number, name and balance:";
        cin>>acc;
        cin.ignore();
        getline(cin,name);
        cin>>bal;
    }

    void display(){
        cout<<"Account Number: "<<acc<<"\nName: "<<name<<"\nBalance: "<<bal;
    }

    virtual void calculateInterest(){
        cout<<"No interest on the base account\n";
    }

    virtual ~Account(){}
};

class SavingsAccount:public Account{
    protected:
    float rate;

    public:
    void get() override{
        Account::get();
        cin>>rate;
    }

    void calculateInterest(){
        cout<<"Interest amount is: "<<bal*rate/100<<endl;
    }
};

class CurrentAccount:public Account{
    protected:
    float overdraft;

    public:
    void get() override{
        Account::get();
        cin>>overdraft;
    }

    void calculateInterest(){
        cout<<"Interest is not applicable in Current amount. Overdraft amount is "<<overdraft<<endl;
    }
};

class PremiumSavings:public SavingsAccount{
    protected:
    float loyalty;

    public:
    PremiumSavings():loyalty(100.00f){};

    void CalculateInterest(){
        cout<<"Interest amount is: "<<bal*rate/100+loyalty<<endl;
    }
};


int main(){
    Account* acc;
    int c;
    cin>>c;
    if(c==1){
        acc=new SavingsAccount();
    }else if(c==2){
        acc=new CurrentAccount();
    }else if(c==3){
        acc=new PremiumSavings();
    }

    acc->get();
    acc->display();
    acc->calculateInterest();

    delete acc;
    return 0;
}
