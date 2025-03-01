#include<iostream>
using namespace std;

class AscendingOrder{
    public:
        int n;
        int* num;
    
    AscendingOrder(int size){
        n=size;
        num=new int[n];
    }
    
    void rearranging(int n,int num[]){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(num[j]>num[j+1]){
                    swap(num[j],num[j+1]);
                }
            }
        }
    }
    ~AscendingOrder(){
        delete[] num;
    }
};

int main(){
    int size;
    cin>> size;
    AscendingOrder a(size);
    
    for(int i=0;i<a.n;i++){
        cin>>a.num[i];
    }

    a.rearranging(a.n,a.num);

    for(int i=0;i<a.n;i++){
        cout<< a.num[i]<<endl;
    }
    return 0;
}