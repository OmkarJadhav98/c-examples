#include <stdio.h>
#include <string.h>

// Define the Person structure
struct Person {
    char name[50];
};

// Define the Doctor structure (inherits from Person)
struct Doctor {
    struct Person person;
    char specialization[50];
};

// Define the Surgeon structure (inherits from Doctor)
struct Surgeon {
    struct Doctor doctor;
    char surgeryType[50];
};

int main() {
    // Create instances of Surgeon
    struct Surgeon john = { .doctor = { .person = { "John" }, .specialization = "Cardiology" }, .surgeryType = "heart" };
    struct Surgeon mary = { .doctor = { .person = { "Mary" }, .specialization = "Orthopedics" }, .surgeryType = "knee" };

    // Introduce and display specialization
    printf("Hello, I am %s. I am a doctor specialized in %s. I perform %s surgeries.\n", john.doctor.person.name, john.doctor.specialization, john.surgeryType);
    printf("Hello, I am %s. I am a doctor specialized in %s. I perform %s surgeries.\n", mary.doctor.person.name, mary.doctor.specialization, mary.surgeryType);

    return 0;
}
