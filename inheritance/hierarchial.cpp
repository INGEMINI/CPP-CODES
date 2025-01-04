#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
public:
    void setDetails(string empName, int empID) {
        name = empName;
        id = empID;
    }

    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class 1
class Manager : public Employee {
private:
    int teamSize;
public:
    void setTeamSize(int size) {
        teamSize = size;
    }

    void displayManagerInfo() {
        displayDetails();
        cout << "Team Size: " << teamSize << endl;
    }
};

// Derived class 2
class Engineer : public Employee {
private:
    string specialization;
public:
    void setSpecialization(string spec) {
        specialization = spec;
    }

    void displayEngineerInfo() {
        displayDetails();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    // Creating a Manager object
    Manager mgr;
    mgr.setDetails("Alice", 101);
    mgr.setTeamSize(10);
    cout << "Manager Info:" << endl;
    mgr.displayManagerInfo();

    cout << endl;

    // Creating an Engineer object
    Engineer eng;
    eng.setDetails("Bob", 102);
    eng.setSpecialization("Software Development");
    cout << "Engineer Info:" << endl;
    eng.displayEngineerInfo();

    return 0;
}
