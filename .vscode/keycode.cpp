/*
Imagine a tollbooth with a class called TollBooth. The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected. A constructor initializes both of these data members to 0. A member function called payingCar() increments the car total and adds 0.5 to the cash total. Another function called nonPayCar( ) increments the car total but adds nothing to the cash total. Finally a member function called display( )shows the two totals. Include a program to test this class. This program should allow the user to push one key to count a paying car and another to count a non paying car. Pushing the ESC key should cause the program to print out the total number of cars and total cash and then exit

*/

#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;  // To store total number of cars
    double totalCash;        // To store total money collected

public:
    // Constructor to initialize totalCars and totalCash to 0
    TollBooth() : totalCars(0), totalCash(0.0) {}

    // Function to count a paying car
    void payingCar() {
        totalCars++;
        totalCash += 0.5;
    }

    // Function to count a non-paying car
    void nonPayCar() {
        totalCars++;
    }

    // Function to display the total cars and cash collected
    void display() const {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Cash: $" << totalCash << endl;
    }
};

int main() {
    TollBooth tollBooth;
    char key;

    cout << "Tollbooth system running...\n";
    cout << "Press 'P' for paying car, 'N' for non-paying car, or type 'E' to exit and display totals." << endl;

    // Loop until 'E' is pressed
    while (true) {
        cout << "Enter choice: ";
        cin >> key;  // Capture user input (waiting for Enter)

        if (key == 'E' || key == 'e') {  // 'E' is for Exit
            cout << "\nExiting program...\n";
            tollBooth.display();  // Display totals when 'E' is pressed
            break;  // Exit the loop
        } else if (key == 'P' || key == 'p') {
            tollBooth.payingCar();  // Count a paying car
            cout << "Paying car recorded.\n";
        } else if (key == 'N' || key == 'n') {
            tollBooth.nonPayCar();  // Count a non-paying car
            cout << "Non-paying car recorded.\n";
        } else {
            cout << "Invalid input. Press 'P' for paying, 'N' for non-paying, or 'E' to exit.\n";
        }
    }

    return 0;
}
