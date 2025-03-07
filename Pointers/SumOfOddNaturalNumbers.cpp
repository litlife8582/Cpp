#include<iostream>
using namespace std;

class Sum{
    public:
    int num;

    Sum(int n){
        this->num=n;
    }

    int SumOfOdd(){
        int sum=0;
        for(int i=1;i<num;i+=2){
            sum+=i;
        }
        return sum;
    }
};

int main(){
    int n;
    cin>>n;

    Sum s(n);

    cout<<s.SumOfOdd();
    return 0;
}