#include<iostream>
using namespace std;

class Numbers{
    public:
    int a,b,c;

    void Check(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
        
        cout<<"Largest Number: "<<endl;
        
        if(a>b){
            if(a>c) cout<<a;
            else cout<<c;
        }else{
            if(b>c)cout<<b;
            else cout<<c;
        }
    }
};

int main(){
    Numbers n;
    cin>>n.a;
    cin>>n.b;
    cin>>n.c;

    n.Check(n.a,n.b,n.c);

    return 0;
}