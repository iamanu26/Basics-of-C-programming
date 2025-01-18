/*
This program demonstrates the use of various operators in C, including:

- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Increment/Decrement Operators
- Ternary Operator
*/

#include <stdio.h>

int main() {
    // 1. Arithmetic Operators
    printf("Arithmetic Operators:\n");
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Division (a / b): %d\n", a / b);  // Integer division
    printf("Modulus (a %% b): %d\n\n", a % b);  // Note: %% is used to escape %

    // 2. Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n\n", a <= b);  // Less than or equal to

    // 3. Logical Operators
    printf("Logical Operators:\n");
    int x = 1, y = 0;
    printf("x = %d, y = %d\n", x, y);
    printf("x && y: %d\n", x && y);  // Logical AND
    printf("x || y: %d\n", x || y);  // Logical OR
    printf("!x: %d\n\n", !x);        // Logical NOT

    // 4. Bitwise Operators
    printf("Bitwise Operators:\n");
    int p = 5, q = 3;  // Binary: p = 0101, q = 0011
    printf("p = %d, q = %d\n", p, q);
    printf("p & q (AND): %d\n", p & q);   // 0101 & 0011 = 0001 (1)
    printf("p | q (OR): %d\n", p | q);    // 0101 | 0011 = 0111 (7)
    printf("p ^ q (XOR): %d\n", p ^ q);   // 0101 ^ 0011 = 0110 (6)
    printf("~p (NOT): %d\n", ~p);         // Inverts all bits of p
    printf("p << 1 (Left Shift): %d\n", p << 1);  // 0101 << 1 = 1010 (10)
    printf("p >> 1 (Right Shift): %d\n\n", p >> 1);  // 0101 >> 1 = 0010 (2)

    // 5. Assignment Operators
    printf("Assignment Operators:\n");
    int z = 10;
    printf("z = %d\n", z);
    z += 5;  // z = z + 5
    printf("z += 5: %d\n", z);
    z -= 3;  // z = z - 3
    printf("z -= 3: %d\n", z);
    z *= 2;  // z = z * 2
    printf("z *= 2: %d\n", z);
    z /= 4;  // z = z / 4
    printf("z /= 4: %d\n", z);
    z %= 3;  // z = z % 3
    printf("z %%= 3: %d\n\n", z);

    // 6. Increment and Decrement Operators
    printf("Increment and Decrement Operators:\n");
    int n = 5;
    printf("n = %d\n", n);
    printf("Post-increment (n++): %d\n", n++);  // Returns n, then increments
    printf("Value of n after post-increment: %d\n", n);
    printf("Pre-increment (++n): %d\n", ++n);  // Increments, then returns n
    printf("Post-decrement (n--): %d\n", n--);  // Returns n, then decrements
    printf("Value of n after post-decrement: %d\n", n);
    printf("Pre-decrement (--n): %d\n\n", --n);  // Decrements, then returns n

    // 7. Ternary Operator
    printf("Ternary Operator:\n");
    int max = (a > b) ? a : b;  // If a > b, max = a; otherwise, max = b
    printf("a = %d, b = %d, max = %d\n\n", a, b, max);

    return 0;
}


/*
===================================== SAMPLE OUTPUT =================================================================
Arithmetic Operators:
a = 10, b = 3
Addition (a + b): 13
Subtraction (a - b): 7
Multiplication (a * b): 30
Division (a / b): 3
Modulus (a % b): 1

Relational Operators:
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0

Logical Operators:
x = 1, y = 0
x && y: 0
x || y: 1
!x: 0

Bitwise Operators:
p = 5, q = 3
p & q (AND): 1
p | q (OR): 7
p ^ q (XOR): 6
~p (NOT): -6
p << 1 (Left Shift): 10
p >> 1 (Right Shift): 2

Assignment Operators:
z = 10
z += 5: 15
z -= 3: 12
z *= 2: 24
z /= 4: 6
z %= 3: 0

Increment and Decrement Operators:
n = 5
Post-increment (n++): 5
Value of n after post-increment: 6
Pre-increment (++n): 7
Post-decrement (n--): 7
Value of n after post-decrement: 6
Pre-decrement (--n): 5

Ternary Operator:
a = 10, b = 3, max = 10

*/