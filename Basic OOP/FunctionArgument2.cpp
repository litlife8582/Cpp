#include<iostream>
using namespace std;

int findLargest(int arr[],int size=5){
    int n=size;
    for(int i=0;i<size;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr[size-1];
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int l=findLargest(arr);
    cout<<l;
}