#include<iostream>
#include<iomanip>
using namespace std;

void currentSalary(int *rate,int *salary){
    float hike=(*rate/100.0)*(*salary);
    cout<<fixed<<setprecision(2);
    cout<<(*salary)+hike;
}

int main(){
    int r, s;
    cin>>r;
    cin>>s;
    
    currentSalary(&r,&s);
    return 0;   
}