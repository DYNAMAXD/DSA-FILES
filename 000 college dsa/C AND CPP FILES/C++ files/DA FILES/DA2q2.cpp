#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    string manufacturer;
    string model;
    int year;

    void startEngine() {
        cout << model << " engine started." << endl;
    }

    void stopEngine() {
        cout << model << " engine stopped." << endl;
    }

    void accelerate() {
        cout << model << " is accelerating" << endl;
    }
};

class ElectricVehicle {
public:
    float batteryCapacity;
    float chargingTime;

    void chargeBattery() {
        cout << "Charging the battery " << endl;
    }

    void runOnElectricPower() {
        cout << "using electric power now." << endl;
    }
};

class HybridVehicle {
public:
    float fuelTankCapacity;
    float electricMotorPower;

    void useFuel() {
        cout << "Using fuel from a fuel tank"<< endl;
    }

    void switchToElectricPower() {
        cout << "Switching to electric mode" << endl;
    }
};

class HybridCar : public Vehicle, public HybridVehicle 
{

};

int main() {
    
    return 0;
}
