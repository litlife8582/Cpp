#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string result;
    for(char ch:str){
        if(ch!=' '){
            result+=ch;
        }
    }

    cout<<result;
    return 0;
}