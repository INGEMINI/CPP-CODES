#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }

    void stop() {
        cout << "Vehicle stopped." << endl;
    }
};

// Derived class (inherits from Vehicle)
class Car : public Vehicle {
protected:
    int fuel;
public:
    void refuel(int liters) {
        fuel = liters;
        cout << "Car refueled with " << fuel << " liters of fuel." << endl;
    }
};

// Further Derived class (inherits from Car)
class SportsCar : public Car {
private:
    int topSpeed;
public:
    void setTopSpeed(int speed) {
        topSpeed = speed;
        cout << "Sports car top speed set to " << topSpeed << " km/h." << endl;
    }

    void displaySpecifications() {
        cout << "Sports Car Specifications:" << endl;
        cout << "- Fuel: " << fuel << " liters" << endl;
        cout << "- Top Speed: " << topSpeed << " km/h" << endl;
    }
};

int main() {
    SportsCar ferrari;

    // Vehicle functionality
    ferrari.start();

    // Car functionality
    ferrari.refuel(50);

    // SportsCar functionality
    ferrari.setTopSpeed(300);
    ferrari.displaySpecifications();

    // Stopping the vehicle
    ferrari.stop();

    return 0;
}
