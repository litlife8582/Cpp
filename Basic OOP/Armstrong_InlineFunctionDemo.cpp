#include<iostream>
#include<cmath>
using namespace std;

inline bool isArmstrong(int number){
    int sum=0,temp=number;
    while(number!=0){
        int digit=number%10;
        sum+=pow(digit,3);
        number/=10;
    }
    if(sum==temp){
        return true;
    }else{
        return false;
    }
}

inline void printFactors(int number){
    if(isArmstrong(number)){
        cout<<number<<" is an Armstrong number.\n";
        
        for(int i=1;i<=number;i++){
            if(number%i==0){
                cout<<i<<" ";
            }
        }
    }else{
        cout<<number<<" is not an Armstrong number.\n";
    }
}

int main(){
    int num;
    cin>>num;
    printFactors(num);
    return 0;
}