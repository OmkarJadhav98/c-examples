#include <stdio.h>
#include <string.h>

// Define the Person structure
struct Person {
    char name[50];
};

// Define the Employee structure (inherits from Person)
struct Employee {
    struct Person person;
    char department[50];
};

// Define the Developer structure (inherits from Employee)
struct Developer {
    struct Employee employee;
    char programmingLanguage[50];
};

int main() {
    // Create instances of Developer
    struct Developer alice = { .employee = { .person = { "Alice" }, .department = "Engineering" }, .programmingLanguage = "C++" };
    struct Developer bob = { .employee = { .person = { "Bob" }, .department = "IT" }, .programmingLanguage = "Java" };

    // Introduce, display department, and mention programming language
    printf("Hello, I am %s. I work in the %s department. I write code in %s.\n", alice.employee.person.name, alice.employee.department, alice.programmingLanguage);
    printf("Hello, I am %s. I work in the %s department. I write code in %s.\n", bob.employee.person.name, bob.employee.department, bob.programmingLanguage);

    return 0;
}
