#include<iostream>
#include<iomanip>
using namespace std;

class Account{
    public:
    string accountNumber;
    double balance;
    
    Account(string accountNumber,double balance)
    :accountNumber(accountNumber),balance(balance){}
    
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposited "<<fixed<<setprecision(2)<<amount<<" successfully.\n";
    }
    
    void withdraw(double amount){
        balance-=amount;
        cout<<"Withdrawn "<<fixed<<setprecision(2)<<amount<<" successfully.\n";
    }
    
    double getBalance() const{
        return balance;
    }
};

class SavingsAccount:public Account{
    public:
    double interestRate;
    
    SavingsAccount(string accountNumber, double balance, double interestRate)
    :Account(accountNumber,balance),interestRate(interestRate){}
    
    void addInterest(){
        double interest=balance*(interestRate/100);
        balance+=interest;
        cout<<"Interest added: "<<fixed<<setprecision(2)<<interest<<"\n";
    }
    
    void displayBalance() const{
        cout<<"Savings Account Balance: "<<fixed<<setprecision(2)<<getBalance()<<"\n";
    }
};


int main(){
    string accountNumber;
    double balance,interestRate,deposit,withdrawal;
    
    cin>>accountNumber>>balance>>interestRate>>deposit>>withdrawal;
    
    SavingsAccount account(accountNumber,balance,interestRate);
    account.deposit(deposit);
    account.withdraw(withdrawal);
    account.addInterest();
    account.displayBalance();
    
    return 0;
}