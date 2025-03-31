#include<iostream>
#include<iomanip>
using namespace std;

class Forest{
    public:
    float side,length,breadth,mm1,mm2;
    
    Forest(float s,float r1){
        side=s;
        mm1=r1;
    }
    
    Forest(float l,float b,float r2){
        length=l;
        breadth=b;
        mm2=r2;
    }
    
    float calcSquare(){
        return side*side*mm1;
    }
    
    float calcRectangle(){
        return length*breadth*mm2;
    }
};

int main(){
    float s,l,b,r1,r2;
    
    cin>>s>>r1;
    cin>>l>>b>>r2;
    
    Forest f1(s,r1);
    float sq=f1.calcSquare();
    
    Forest f2(l,b,r2);
    float rec=f2.calcRectangle();
    
    cout<<fixed<<setprecision(2);
    cout<<sq<<" mm\n";
    cout<<rec<<" mm\n";
    
    return 0;
}


