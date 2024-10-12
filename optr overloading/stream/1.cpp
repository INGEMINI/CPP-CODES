#include <iostream>
using namespace std;

class opt {
    int a;

public:
    // Constructor to initialize 'a' with a given value
    opt(int b) {
        a = b;
    }

    // Default constructor to initialize 'a' to 0
    opt() {
        a = 0;
    }

 friend ostream& operator<<(ostream& os, opt& obj) ;
 friend istream& operator>>(istream& is, opt& obj);
   
};


 // Overloading '<<' for output
   
     ostream& operator<<(ostream& os, opt& obj) {
        os << "a is " << obj.a;
        return os;
    }

    // Overloading '>>' for input
   
    istream& operator>>(istream& is, opt& obj) {
        is >> obj.a;
        return is;
    }
int main() {
    opt o1(4), o2;

    cout << "Initial values:" << endl;
    cout << "o1: " << o1 << endl;
    cout << "o2: " << o2 << endl << endl;

    cout << "Enter a new value for o1: ";
    cin >> o1;  // Input new value for o1

    cout << "New value of o1: " << o1 << endl;

    return 0;
    
}

