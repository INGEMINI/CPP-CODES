#include <iostream>
#include <string>
using namespace std;

// First base class
class Lighting {
public:
    void turnOnLights() {
        cout << "Lights are turned ON." << endl;
    }
    void turnOffLights() {
        cout << "Lights are turned OFF." << endl;
    }
};

// Second base class
class TemperatureControl {
protected:
    int temperature;
public:
    void setTemperature(int temp) {
        temperature = temp;
        cout << "Temperature set to " << temperature << " degrees." << endl;
    }
};

// Third base class
class SecuritySystem {
public:
    void armSystem() {
        cout << "Security system is armed." << endl;
    }
    void disarmSystem() {
        cout << "Security system is disarmed." << endl;
    }
};

// Derived class
class SmartHome : public Lighting, public TemperatureControl, public SecuritySystem {
public:
    void statusReport() {
        cout << "Smart Home Status:" << endl;
        cout << "- Lights: Controlled" << endl;
        cout << "- Temperature: " << temperature << " degrees (adjustable)" << endl;
        cout << "- Security System: Configurable" << endl;
    }
};

int main() {
    SmartHome home;

    // Using Lighting functionality
    home.turnOnLights();
    home.turnOffLights();

    // Using TemperatureControl functionality
    home.setTemperature(22);

    // Using SecuritySystem functionality
    home.armSystem();
    home.disarmSystem();

    // Displaying overall status
    home.statusReport();

    return 0;
}
