#include<iostream>
using namespace std;

class Man{
    public:
    static int count;
    
    Man(){
        cout<<"Created "<<count + 1<<endl;
        count++;
    }
    
    ~Man(){
        count--;
        cout<<"Destroyed "<<count<<endl;
    }
};

int Man::count=0;

int main(){
    int n;
    cin>>n;
    
    Man* arr=new Man[n];
    
    delete[] arr;
    
    return 0;
}