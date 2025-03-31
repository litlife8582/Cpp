#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    string id;
    
    Person(string name,string id):name(name),id(id){}
};

class Score{
    public:
    double score;
    
    Score(double score):score(score){}
};

class UndergraduateStudent:public Person,public Score{
    public:
    UndergraduateStudent(string name,string id,double score)
    :Person(name,id),Score(score){}
    
    char calculateGrade(){
        if(score>=90) return 'A';
        else if(score>=80) return 'B';
        else if(score>=70) return 'C';
        else if(score>=60) return 'D';
        else return 'F';
    }
    
    void displayGrade(){
        cout<<"Student "<<name<<" with ID "<<id<<" received grade "<<calculateGrade()<<".\n";
    }
};

class PostgraduateStudent:public Person,public Score{
    public:
    PostgraduateStudent(string name,string id,double score)
    :Person(name,id),Score(score){}
    
    string calculateResult(){
        return (score>=60)?"Pass":"Fail";
    }
    
    void displayResult(){
        cout<<"Student "<<name<<" with ID "<<id<<" "<<calculateResult()<<" the course.\n"; 
    }
};

int main(){
    string ugName,ugId;
    double ugScore;
    
    cin>>ugName>>ugId>>ugScore;
    
    UndergraduateStudent ugStudent(ugName,ugId, ugScore);
    ugStudent.displayGrade();
    
    string pgName,pgId;
    double pgScore;
    
    cin>>pgName>>pgId>>pgScore;
    
    PostgraduateStudent pgStudent(pgName,pgId,pgScore);
    pgStudent.displayResult();
    
    return 0;
}