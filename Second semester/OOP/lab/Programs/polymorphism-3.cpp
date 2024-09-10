#include <iostream>
#include <typeinfo> 

class Vehicle {
public:
    virtual ~Vehicle() {} 
    virtual void start() const { std::cout << "Vehicle starting..." << std::endl; }
    virtual void stop() const { std::cout << "Vehicle stopping..." << std::endl; }
};

class Bus : public Vehicle {
public:
    void start() const override { std::cout << "Bus starting..." << std::endl; }
    void stop() const override { std::cout << "Bus stopping..." << std::endl; }
};

class Car : public Vehicle {
public:
    void start() const override { std::cout << "Car starting..." << std::endl; }
    void stop() const override { std::cout << "Car stopping..." << std::endl; }
};

class Bike : public Vehicle {
public:
    void start() const override { std::cout << "Bike starting..." << std::endl; }
    void stop() const override { std::cout << "Bike stopping..." << std::endl; }
};

void demonstrateRTTI(Vehicle* v) {
    std::cout << "Type of Vehicle: " << typeid(*v).name() << std::endl;

    if (Bus* b = dynamic_cast<Bus*>(v)) {
        std::cout << "The vehicle is a Bus." << std::endl;
        b->start();
        b->stop();
    } else if (Car* c = dynamic_cast<Car*>(v)) {
        std::cout << "The vehicle is a Car." << std::endl;
        c->start();
        c->stop();
    } else if (Bike* b = dynamic_cast<Bike*>(v)) {
        std::cout << "The vehicle is a Bike." << std::endl;
        b->start();
        b->stop();
    } else {
        std::cout << "Unknown vehicle type." << std::endl;
    }
}

int main() {
    Bus myBus;
    Car myCar;
    Bike myBike;

    Vehicle* v1 = &myBus;
    Vehicle* v2 = &myCar;
    Vehicle* v3 = &myBike;

    std::cout << "Demonstrating RTTI for Bus:" << std::endl;
    demonstrateRTTI(v1);

    std::cout << "\nDemonstrating RTTI for Car:" << std::endl;
    demonstrateRTTI(v2);

    std::cout << "\nDemonstrating RTTI for Bike:" << std::endl;
    demonstrateRTTI(v3);

    return 0;
}

