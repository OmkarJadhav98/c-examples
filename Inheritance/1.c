#include <stdio.h>

// Base struct: Vehicle
struct Vehicle {
    int wheels;
};

// Derived struct: Car (inherits from Vehicle)
struct Car {
    struct Vehicle base;
    int passengers;
};

// Derived struct: Bike (inherits from Vehicle)
struct Bike {
    struct Vehicle base;
    int pedals;
};

// Derived struct: Truck (inherits from Vehicle)
struct Truck {
    struct Vehicle base;
    int capacity;
};

// Derived struct: Rickshaw (inherits from Vehicle)
struct Rickshaw {
    struct Vehicle base;
    int passengers;
};

int main() {
    struct Car myCar;
    myCar.base.wheels = 4;
    myCar.passengers = 5;

    struct Bike myBike;
    myBike.base.wheels = 2;
    myBike.pedals = 2;

    struct Truck myTruck;
    myTruck.base.wheels = 6;
    myTruck.capacity = 10000;

    struct Rickshaw myRickshaw;
    myRickshaw.base.wheels = 3;
    myRickshaw.passengers = 2;

    printf("Car has %d wheels and can carry %d passengers.\n", myCar.base.wheels, myCar.passengers);
    printf("Bike has %d wheels and %d pedals.\n", myBike.base.wheels, myBike.pedals);
    printf("Truck has %d wheels and a capacity of %d kg.\n", myTruck.base.wheels, myTruck.capacity);
    printf("Rickshaw has %d wheels and can carry %d passengers.\n", myRickshaw.base.wheels, myRickshaw.passengers);

    return 0;
}
