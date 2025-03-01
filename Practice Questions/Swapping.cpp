#include<iostream>
using namespace std;
class Swap{
    public:
    int num1;
    int num2;

    void swapping(int n1,int n2){
        num1=num1*num2;
        num2=num1/num2;
        num1=num1/num2;
    }
};

int main(){
    Swap swap;
    cin>>swap.num1;
    cin>>swap.num2;

    swap.swapping(swap.num1,swap.num2);

    cout<<swap.num1<<endl;
    cout<<swap.num2;

    return 0;
}