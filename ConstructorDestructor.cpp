#include<iostream>
#include<string>
using namespace std;

class PalindromeChecker{
    private:
    string str;
    
    public:
    PalindromeChecker(string s){
        this->str=s;
    }
    
    void isPalindrome(){
        string rev=string(str.rbegin(),str.rend());
        if(rev==str){
            cout<<"The input string is a palindrome.\n";
        }else{
            cout<<"The input string is not a palindrome.\n";
        }
    }
    
    ~PalindromeChecker(){
        cout<<"Destructor called. Object destroyed.\n";
    }
};


int main(){
    string s;
    getline(cin,s);
    PalindromeChecker p(s);
    p.isPalindrome();
    return 0;
}