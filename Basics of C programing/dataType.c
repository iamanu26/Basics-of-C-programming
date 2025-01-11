#include <stdio.h>
int main() {
    // 1. Basic Data Types
    int a = 42;           // Integer type: Used for whole numbers
    float b = 3.14f;      // Float type: Single-precision floating-point
    double c = 2.71828;   // Double type: Double-precision floating-point
    char d = 'A';         // Char type: Represents a single character
    // void is used for functions that don't return a value (cannot be declared as a variable)
    // 2. Derived Data Types
    int arr[5] = {1, 2, 3, 4, 5}; // Array: Collection of elements of the same type
    int *ptr = &a;                // Pointer: Holds the address of another variable
    struct Point {                // Structure: User-defined data type to group variables
        int x;
        int y;
    };
    struct Point p1 = {10, 20};   // Creating a variable of type 'struct Point'
    // 3. Enumeration
    enum Weekdays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekdays today = Friday; // Enum: User-defined type with a set of named values
    // 4. Typedef
    typedef unsigned int uint;    // Typedef: Defines an alias for another type
    uint age = 25;                // 'uint' is now equivalent to 'unsigned int'
    // 5. Boolean (introduced in C99)
    #include <stdbool.h>          // To use boolean in C
    bool isCodingFun = true;      // Bool: Represents true (1) or false (0)
    // Printing all variables
    printf("int: %d\n", a);
    printf("float: %.2f\n", b);
    printf("double: %.5f\n", c);
    printf("char: %c\n", d);
    printf("Pointer value: %p\n", (void*)ptr);
    printf("Struct Point: (%d, %d)\n", p1.x, p1.y);
    printf("Enum value: %d\n", today); // Enums are internally integers
    printf("Typedef uint value: %u\n", age);
    printf("Boolean value: %d\n", isCodingFun);
    return 0;
}