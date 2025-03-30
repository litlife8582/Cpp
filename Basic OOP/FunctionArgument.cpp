#include<iostream>
#include<string>
using namespace std;

void Welcome(const string& name=""){
    if(!name.empty()){
        cout<<"Welcome "<<name<<endl;
    }else{
        cout<<"Welcome "<<endl;
    }
}

void Hello(const string& name=""){
    if(!name.empty()){
        cout<<"Hello "<<name<<endl;
    }else{
        cout<<"Hello "<<endl;
    }
}

int main(){
    string name;
    getline(cin,name);
    
    Welcome(name);
    Hello(name);
    return 0;
}

