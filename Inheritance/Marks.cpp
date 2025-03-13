/* We want to calculate the total marks of each student of a class in Physics,Chemistry and
 Mathematics and the average marks of the class. The number of students in the class are
 entered by the user. Create a class named Marks with data members for roll number, name and
 marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and
 Mathematics, which are used to define marks in individual subject of each student.*/

#include <iostream>
#include <string>

using namespace std;

class Marks {
protected:
    int rollNo;
    string name;
    float physicsMarks, chemistryMarks, mathMarks;

public:
    void getDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayDetails() {
        cout << "Roll No: " << rollNo << "\nName: " << name << endl;
    }
};

class Physics : virtual public Marks {
public:
    void getPhysicsMarks() {
        cout << "Enter Physics Marks: ";
        cin >> physicsMarks;
    }
};

class Chemistry : virtual public Marks {
public:
    void getChemMarks() {
        cout << "Enter Chemistry Marks: ";
        cin >> chemistryMarks;
    }
};

class Mathematics : virtual public Marks {
public:
    void getMathMarks() {
        cout << "Enter Mathematics Marks: ";
        cin >> mathMarks;
    }
};

// Student class now inherits virtually (NO more ambiguity)
class Student : public Physics, public Chemistry, public Mathematics {
public:
    void getStudentDetails() {
        getDetails();
        getPhysicsMarks();
        getChemMarks();
        getMathMarks();
    }

    void displayStudentDetails() {
        displayDetails();
        float totalMarks = physicsMarks + chemistryMarks + mathMarks;
        cout << "Physics: " << physicsMarks
             << "\nChemistry: " << chemistryMarks
             << "\nMathematics: " << mathMarks
             << "\nTotal Marks: " << totalMarks << endl;
    }

    float getTotalMarks() {
        return physicsMarks + chemistryMarks + mathMarks;
    }
};

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Student students[100];
    float totalClassMarks = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].getStudentDetails();
        totalClassMarks += students[i].getTotalMarks();
    }

    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentDetails();
        cout << "------------------------\n";
    }

    float classAverage = totalClassMarks / (numStudents * 3); // 3 subjects per student
    cout << "Class Average Marks: " << classAverage << endl;

    return 0;
}