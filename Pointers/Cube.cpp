#include<iostream>
using namespace std;

class CubeOfNumbers{
    public:
    int num;

    CubeOfNumbers(int n){
        this->num=n;
    }

    void Cube(){
        for(int i=1;i<=num;i++)
        cout<<(i*i*i)<<endl;
    }

};

int main(){
    int n;
    cin>>n;
    
    CubeOfNumbers c(n);

    c.Cube();

    return 0;
}