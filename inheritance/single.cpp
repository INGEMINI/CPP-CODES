#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int num; // Protected member can be accessed in derived class
public:
    void setNumber(int n) {
        num = n;
    }

    void displayNumber() {
        cout << "Number: " << num << endl;
    }
};

// Derived class
class Square : public Number {
public:
    void displaySquare() {
        cout << "Square of the number: " << num * num << endl;
    }
};

int main() {
    Square sq;

    // Setting the number
    sq.setNumber(5);

    // Accessing methods
    sq.displayNumber();       // From base class
    sq.displaySquare();       // From derived class

    return 0;
}
