/*Create a class SNan with members as Account_number, saving_balance and 
Account_holder_name. Create parameterized constructor within the class which
takes the 3 fields represented above. Create member functions for deposit(), 
withdraw(), interest(), penalty(), and show(). The Interest may be calculated 
as sav_bal = sav_bal * 0.2 (considering 2% fixed rate per year).
Include necessary member functions in order to achieve the following tasks:

1.Accept deposit from a customer and update the balance
2.Display the account details
3.Compute and display the deposit interest
4.Permit withdrawal and update the balance
5.Check for the minimum balance, impose penalty (Rs 20 needs to be deducted if 
minimum balance < 500), if necessary, and update the balance
6.Write the main() script to test the functionality of the above class features.
*/

#include<iostream>
#include<string>
using namespace std;

class SNan{
    protected:
    int Account_Number;
    float saving_balance;
    string Account_holder_name;

    public:
    SNan(int accno,float bal, string name){
        Account_Number=accno;
        saving_balance=bal;
        Account_holder_name=name;
    }

    void deposit(float deposit){
        saving_balance+=deposit;
        cout<<"Amount deposited successfully\n";
    }

    void withdraw(float withdraw){
        if(saving_balance>withdraw){
            saving_balance-=withdraw;
            cout<<"Amount withdrawn successfully\n";
        }else{
            cout<<"Insufficient Balance\n";
        }
    }

    void interest(){
        float interest=saving_balance*.2;
        cout<<"Your Interest Amount"<<interest<<endl;
        saving_balance+=interest;
    }

    void penalty(){
        if(saving_balance<500){
            saving_balance-=20;
        }
        cout<<endl;
    }

    void show(){
        cout<<"\nDisplay Detials\n";
        cout<<"Account Number: "<<Account_Number<<endl;
        cout<<"Account Holder Name: "<<Account_holder_name<<endl;
        cout<<"Balance: "<<saving_balance;
        cout<<endl;
    }
};

int main(){
    int acc;
    float bal;
    string name;

    cout<<"Enter the details :\n";
    cout<<"Enter your account Number: ";
    cin>>acc;
    cout<<"Enter your balance: ";
    cin>>bal;
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin,name);


    SNan s(acc,bal,name);

    int choice;
    cout<<"Press:\n";
    cout<<"1- To deposit amount\n";
    cout<<"2- To withdraw amount\n";
    cout<<"3- To check interest\n";
    cout<<"4- To show balance\n";
    cout<<"0- To exit\n";

    while(choice!=0){
        if(choice==1){
            float depo;
            cout<<"Enter the amount to be deposited: ";
            cin>>depo;
            s.deposit(depo);
        }else if(choice==2){
            float with;
            cout<<"Enter the amount to be withdrawn: ";
            cin>>with;
            s.withdraw(with);
        }else if(choice==3){
            s.interest();
        }else if(choice==4){
            s.penalty();
            s.show();
        }

        cin>>choice;
    }

    return 0;
}