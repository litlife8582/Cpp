#include<iostream>
using namespace std;

class Year{
    public:
  
    inline bool isLeapYear(int y){
        if(y%400==0){
            return true;
        }
        else if(y%100==0){
            return false;
        }
        else if(y%4==0){
            return true;
        }
        return false;
    }
    
};

int main(){
    int year;
    cin>>year;
    
    Year ye;
    if(ye.isLeapYear(year)){
        cout<<year<<" is a leap year.";
    }else{
        cout<<year<<" is not a leap year.";
    }
    
    return 0;
}