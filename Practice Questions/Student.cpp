/*Create a class Student with data members - Register number, name and age. 
Create another class Exam that inherits Student class with a data member 
“Marks” – an array to hold marks in 6 subjects. Create another class called 
Sports with data member – Sport name and Score. Derive another class Result 
that inherits from both Exam and Sports. The Result class should have a method 
to determine the eligibility of the student to be admitted into a course. If 
the average of marks in 6 subjects and sports score is greater than 75, then 
display “The student is eligible” else display “The student is not eligible”. 
Include appropriate get and display methods in each of the classes. Write a 
main function to test the above.*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    protected:
    int regno;
    string name;
    int age;

    public:
    void getStudentDetails(){
        cout<<"Enter the Register No.: ";
        cin>>regno;
        cout<<"Enter the Name: ";
        cin.ignore();
        getline(cin,name);
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }

    void displayStudentDetails(){
        cout<<"Register No.: "<<regno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"\n";
    }
};

class Exam:public Student{
    protected:
    float marks[6];

    public:
    void getMarks(){
        cout<<"Enter the marks for 6 subjects: "<<endl;
        for(int i=0;i<6;i++){
            cin>>marks[i];
        }
        cout<<endl;
    }

    void displayMarks(){
        cout<<"Marks in 6 subjects:";
        for(int i=0;i<6;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }

    float getAverageMarks(){
        float sum=0;
        for(int i=0;i<6;i++){
            sum+=marks[i];
        }
        return sum/6;
    }
};

class Sports{
    protected:
    string sportName;
    float score;

    public:
    void getSportsDetails(){
        cout<<"Enter the Sport Name: ";
        cin.ignore();
        getline(cin,sportName);
        cout<<"Enter the Sport Score: ";
        cin>>score;
    }

    void displaySportDetails(){
        cout<<"Sport Name: "<<sportName<<endl;
        cout<<"Sport Score: "<<score<<endl;
        cout<<"\n";
    }

    float getSportsScore(){
        return score;
    }
};

class Result: public Exam, public Sports{
    public:
    void checkEligibility(){
        float avgMarks=getAverageMarks();
        float sportsScore=getSportsScore();
        float finalScore=(avgMarks+sportsScore)/2.0;

        cout<<"Final Score"<<finalScore<<endl;

        if(finalScore>75){
            cout<<"The Student is eligible"<<endl;
        }else{
            cout<<"The Student is not eligible"<<endl;
        }
    }
};

int main(){
    int numStudent;
    cout<<"Enter the number of students: ";
    cin>>numStudent;

    vector<Result>students(numStudent);

    for(int i=0;i<numStudent;i++){
        cout<<"\nEnter the details for student "<<i+1<<":\n";
        students[i].getStudentDetails();
        students[i].getMarks();
        students[i].getSportsDetails();
    }

    cout<<"Eligibility Results: ";
    for(int i=0;i<numStudent;i++){
        cout<<"\nStudent "<<i+1<<" Details:\n";
        students[i].displayStudentDetails();
        students[i].displayMarks();
        students[i].displaySportDetails();
        students[i].checkEligibility();
    }
    
    return 0;
}