#include<iostream>
using namespace std;

class Calculator{
    public:
    int num1,num2;
    char c;

    int Calc(int num1, int num2,char c){
        int value;
        switch(c){
            case '+':
            value=num1+num2;
            break;

            case '-':
            if(num1>num2){
                value=num1-num2;
            }else{
                value=num2-num1;
            }
            break;

            case '*':
            value=num1*num2;
            break;

            case '/':
            value=num1/num2;
            break;

            default:
            cout<<"Invalid Choice!";
        }
        return value;
    }
};

int main(){
    Calculator cal;
    
    cin>>cal.num1;
    cin>>cal.num2;
    cin>>cal.c;

    cout<<cal.Calc(cal.num1,cal.num2,cal.c);
    return 0;
}
