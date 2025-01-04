#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setPersonalDetails(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    void displayPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Intermediate class 1
class Student : public Person {
protected:
    int studentID;
public:
    void setStudentDetails(int id) {
        studentID = id;
    }

    void displayStudentDetails() {
        displayPersonalDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

// Intermediate class 2
class Marks {
protected:
    int marks[3]; // Marks in 3 subjects
public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayMarks() {
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
    }
};

// Derived class
class Result : public Student, public Marks {
public:
    void displayResult() {
        displayStudentDetails();
        displayMarks();
        int total = marks[0] + marks[1] + marks[2];
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << (total / 3.0) << "%" << endl;
    }
};

int main() {
    Result result;

    // Setting personal details
    result.setPersonalDetails("John Doe", 20);

    // Setting student details
    result.setStudentDetails(12345);

    // Setting marks
    result.setMarks(85, 90, 88);

    // Displaying result
    cout << "Student Result:" << endl;
    result.displayResult();

    return 0;
}
