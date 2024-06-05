#include <stdio.h>
#include <string.h>

// Define the Machine structure
struct Machine {
    char name[50];
};

// Define the WashingMachine structure (inherits from Machine)
struct WashingMachine {
    struct Machine machine;
};

// Define the DishWasher structure (inherits from Machine)
struct DishWasher {
    struct Machine machine;
};

// Define the CarWashingMachine structure (inherits from Machine)
struct CarWashingMachine {
    struct Machine machine;
};

int main() {
    // Create instances of each machine
    struct WashingMachine wm = { .machine = { "Front-Load Washer" } };
    struct DishWasher dw = { .machine = { "Countertop Dishwasher" } };
    struct CarWashingMachine cwm = { .machine = { "Automatic Car Wash" } };

    // Perform actions
    printf("Starting %s...\n", wm.machine.name);
    printf("Washing clothes in the %s...\n", wm.machine.name);

    printf("Starting %s...\n", dw.machine.name);
    printf("Washing dishes in the %s...\n", dw.machine.name);

    printf("Starting %s...\n", cwm.machine.name);
    printf("Washing a car in the %s...\n", cwm.machine.name);

    return 0;
}
