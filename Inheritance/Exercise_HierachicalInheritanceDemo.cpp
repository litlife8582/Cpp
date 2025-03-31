#include<iostream>
using namespace std;

class Exercise{
    protected:
    int duration;
    int weight;
    
    public:
    Exercise(int d, int w):duration(d),weight(w){}
    virtual int calculateCaloriesBurned()=0;
};

class Cardio:public Exercise{
    private:
    int intensity;
    
    public:
    Cardio(int d,int w,int i):Exercise(d,w),intensity(i){}
    
    int calculateCaloriesBurned() override{
        int caloriesPerMinute=8*intensity*weight/200;
        return caloriesPerMinute*duration;
    }
};

class Weightlifting: public Exercise{
    private:
    int repetition;
    
    public:
    Weightlifting(int d,int w,int r):Exercise(d,w),repetition(r){}
    
    int calculateCaloriesBurned() override{
        int caloriesPerRep=5*weight/100;
        return caloriesPerRep*repetition*duration;
    }
};


class Cycling:public Exercise{
    private:
    int speed;
    
    public:
    Cycling(int d, int w, int s):Exercise(d,w),speed(s){}
    
    int calculateCaloriesBurned() override{
        int caloriesPerMinute=10*speed*weight/500;
        return caloriesPerMinute*duration;
    }
};

int main(){
    int duration,weight,type,extra;
    cin>>duration;
    cin>>weight;
    cin>>type;
    cin>>extra;
    
    Exercise* exercise;
    
    if(type==1){
        exercise= new Cardio(duration,weight,extra);
    }else if(type==2){
        exercise= new Weightlifting(duration,weight,extra);
    }else if(type==3){
        exercise= new Cycling(duration,weight,extra);
    }else{
        cout<<"Invalid exercise type"<<endl;
        return 0;
    }
    
    int calories=exercise->calculateCaloriesBurned();
    cout<<"Total calories burned: "<<calories<<" calories"<<endl;
    
    delete exercise;
    return 0;
}