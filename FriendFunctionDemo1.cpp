#include<iostream>
#include<cmath>
using namespace std;

class Box{
    private:
    int length;
    
    public:
    Box(){
        length=0;
    }
    
    void get(int l){
        length=l;
    }
    
    friend int printVolume(Box b);
};

int printVolume(Box b){
        return pow(b.length,3);
    }
    
int main(){
    Box b;
    int l;
    cin>>l;
    b.get(l);
    cout<<printVolume(b);
    return 0;
}