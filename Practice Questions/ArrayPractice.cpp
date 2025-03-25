#include<iostream>
#include<vector>
using namespace std;

class ArrayPractice{
    protected:
    int n;
    vector<int> arr;
    int target;

    public:
    void getDetails(){
        cin>>n;
        arr.resize(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }

    void displayDetails(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }

    void search(){
        cin>>target;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                cout<<"Index: "<<i+1<<endl;
            }
        }
    }
};

int main(){
    int num;
    cin>>num;

    vector<ArrayPractice> array(num);
    for(int i=0;i<num;i++){
        array[i].getDetails();
        array[i].displayDetails();
    }
    return 0;
}