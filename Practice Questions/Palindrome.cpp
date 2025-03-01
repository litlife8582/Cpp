#include<iostream>
using namespace std;

class Palindrome{
        public :
        int num;

        bool CheckPalindrome(int num){
            int rev=0;
            int temp=num;
            while(num!=0){
                int digit=num%10;
                rev=(rev*10)+digit;
                num/=10;
            }
            if(rev==temp) return true;
            else return false;
        }
};

int main(){
    Palindrome p;
    cin>> p.num;
    if(p.CheckPalindrome(p.num)==true){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

}