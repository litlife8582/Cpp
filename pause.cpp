#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class User{
  public:
  string username,name;
  
  void getName(){
      cin>>username;
      cin.ignore();
      getline(cin,name);
  }
  
  void displayProfile(){
      cout<<"UserProfile:\n";
      cout<<"Username: "<<username<<endl;
      cout<<"Name: "<<name<<endl;
  }
};

class Blogger:public User{
    public:
    int size;
    string arr[100];
    
    void CreatePost(){
        cin>>size;
        for(int i=0;i<size;i++){
            cin.ignore();
            getline(cin,arr[i]);
        }
    }
    
    void displayProfile(){
        cout<<"Posts:\n";
        for(int i=0;i<num;i++){
            cout<<arr[i]<<endl;
        }
    }
}