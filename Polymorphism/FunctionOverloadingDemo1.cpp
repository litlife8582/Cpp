#include<iostream>
#include<iomanip>
using namespace std;

int findMin(int a, int b, int c){
    return min(a,min(b,c));
}

double findMin(double x, double y, double z){
    return min(x, min(y,z));
}

int main(){
    int a,b,c;
    double x,y,z;
    
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    
    int minInt=findMin(a,b,c);
    double minDouble=findMin(x,y,z);
    
    cout<<"Minimum integer: "<<minInt<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Minimum double-point value: "<<minDouble<<endl;
    
    return 0;
}