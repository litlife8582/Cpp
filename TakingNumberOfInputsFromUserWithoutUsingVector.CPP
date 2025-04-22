#include<iostream>
using namespace std;

static int j=0;
class Trail{
    int a;

    public:
    void get(){
        cin>>a;
    }

    void display(){
        j++;
        cout<<"Trail "<<a<<endl;
        cout<<"Num "<<j<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    Trail* obj=new Trail[n];

    for(int i=0;i<n;i++){
        obj[i].get();
    }
    for(int i=0;i<n;i++){
        obj[i].display();
    }

    return 0;
}