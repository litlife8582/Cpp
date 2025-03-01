#include<iostream>
using namespace std;

class MaximumMinimum{
    public:
    int n;
    int* num;

    MaximumMinimum(int s){
        int size=s;
        num=new int[size];
    }

    void Check(int num[],int size){
        int max=num[0];
        int min=num[0];
        for(int i=0;i<size;i++){
            if(num[i]>max){
                max=num[i];
            }
            else if(num[i]<min){
                min=num[i];
            }
        }
        cout<<max<<endl;
        cout<<min<<endl;
    }

    ~MaximumMinimum(){
        delete[] num;
    }
};

int main(){
    int size;
    cin>>size;
    MaximumMinimum m(size);
    
    for(int i=0;i<size;i++){
        cin>>m.num[i];
    }

    m.Check(m.num,size);

    return 0;
}