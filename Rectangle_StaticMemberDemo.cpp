#include<iostream>
#include<vector>
using namespace std;

static int count=0;

class Rectangle{
    public:
    int length,width,area;
    
    static void getCount(){
        ::count++;
    }
    
    void setDimensions(int l,int w){
        length=l;
        width=w;
    }
    
    void getArea(){
        area=length*width;
    }
};

int main(){
    int n;
    cin>>n;
    vector<Rectangle> rec(n);
    
    for(int i=0;i<n;i++){
        int l,w;
        cin>>l;
        cin>>w;
        rec[i].setDimensions(l,w);
        rec[i].getCount();
    }
    
    cout<<"Total number of rectangles: "<<::count<<endl;
    
    for(int i=0;i<n;i++){
        rec[i].getArea();
        cout<<"Area of rectangle "<<(i+1)<<": "<<rec[i].area<<endl;
    }
    
    return 0;
}