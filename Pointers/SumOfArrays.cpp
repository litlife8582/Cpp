#include<iostream>
using namespace std;

class SumOfArrays{
    public:
    int size,sum=0;
    int* arr;

    SumOfArrays(int size){
        this->size=size;
        this->arr=new int[size];
    }

    int Sum(){
        for(int i=0;i<size;i++){
            this->sum+=arr[i];
        }
        return sum;
    }

    ~SumOfArrays(){
        delete[] this->arr;
    }
};

int main(){
    int size;
    cin>>size;

    SumOfArrays s(size);

    for(int i=0;i<size;i++){
        cin>>s.arr[i];
    }

    int sum=s.Sum();
    cout<<sum<<endl;

    return 0;
}