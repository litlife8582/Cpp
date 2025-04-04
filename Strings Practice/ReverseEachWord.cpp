#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    vector<string> words;
    string rev_str;
    string word="";

    for(char ch:str){
        if(ch==' '){
            if(!word.empty()){
                words.push_back(word);
                word="";
            }
        }else{
            word+=ch;
        }
    }

    if(!word.empty()){
        words.push_back(word);
    }

    for(int i=0;i<words.size();i++){
        cout<<words[i]<<endl;
    }

    for(int i=0;i<words.size();i++){
        string w=words[i];
        string rev;
        for(int i=w.size()-1;i>=0;i--){
            rev+=w[i];
        }
        rev_str+=rev;
        rev_str+=" ";
    }

    cout<<rev_str;

    return 0;
}