/*
 * This code demonstrates the concept of variables and constants in C.
 * Variables are used to store data values that can change during program execution.
 * Constants are used to store data values that remain the same throughout the program.
 */

#include <stdio.h>

int main() {
    // Variable Declaration and Initialization
    int age = 20; // An integer variable to store age
    float height = 5.9; // A float variable to store height in feet
    char grade = 'A'; // A char variable to store grade

    // Printing Variable Values
    printf("Initial Values:\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    // Modifying Variables
    age = 21; // Changing the value of age
    height = 6.0; // Changing the value of height
    grade = 'B'; // Changing the value of grade

    // Printing Modified Values
    printf("\nModified Values:\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    // Constant Declaration
    const float PI = 3.14159; // A constant value for Pi
    const int DAYS_IN_WEEK = 7; // A constant value for days in a week

    // Printing Constant Values
    printf("\nConstants:\n");
    printf("Value of PI: %.5f\n", PI);
    printf("Days in a week: %d\n", DAYS_IN_WEEK);

    // Uncommenting the following line will cause a compilation error
    // PI = 3.14; // Error: Cannot modify a constant

    return 0;
}
