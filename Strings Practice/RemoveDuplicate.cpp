#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;

    char fin[100];
    int index=0;
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=0;j<index;j++){
            if(str[i]==fin[j]){ 
                flag=true;
                break;
            }
        }
        if(!flag){
            fin[index]=str[i];
            index++;
        }
    }

    fin[index]='\0';

    string f=string(fin);

    cout<<f;
    return 0;
}