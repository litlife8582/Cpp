#include<iostream>
using namespace std;

class String{
    string a;
    public:
    
    String(){
        a="";
    }

    String(string s){
        a=s;
    }   

    string getString(){
        return a;
    }
};

void add(String& m,String& n){
    cout<<m.getString()+n.getString();
}

int main(){
    String s1;
    String s2("Well done!");

    add(s1,s2);

    return 0;
}