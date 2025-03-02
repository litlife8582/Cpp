#include<iostream>
#include<cmath>
using namespace std;

class Arithmatic{
    public:
    int num1,num2;

    int ops1(int num1,int num2){
        return num1+num2;
    }

    int ops2(int num1,int num2){
        return pow(num1,2)+(2*num1*num2)+pow(num2,2); 
    }
};

int main(){
    Arithmatic a,b,c;

    cin>> a.num1 >>a.num2 ;
    cin>> b.num1 >> b.num2;
    cin>> c.num1 >> c.num2;

    cout<<a.ops1(a.num1,a.num2)<<endl;
    cout<<a.ops2(a.num1,a.num2)<<endl;  

    cout<<b.ops1(b.num1,b.num2)<<endl;
    cout<<b.ops2(b.num1,b.num2)<<endl;    

    cout<<c.ops1(c.num1,c.num2)<<endl;
    cout<<c.ops2(c.num1,c.num2)<<endl;

    return 0;
}