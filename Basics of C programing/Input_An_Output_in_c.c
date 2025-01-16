// Input and Output in C
/*
This program demonstrates the basics of input and output in C, including:
-> printf() for displaying output.
-> scanf() for taking user input.
-> Escape sequences for formatting.
-> Formatting specifiers for different data types.
*/

#include <stdio.h>

int main() {
    // 1. Demonstrating printf() function
    printf("Demonstration of printf():\n");
    printf("Hello, World!\n");  // Simple output
    printf("The value of x is: %d\n", 10);  // Using %d for integers
    printf("Value of pi is approximately: %.2f\n\n", 3.14159);  // Formatting floats

    // 2. Demonstrating scanf() function
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n\n", num);

    // 3. Using escape sequences
    printf("Escape Sequences:\n");
    printf("New Line -> This is line 1.\nThis is line 2.\n");
    printf("Tab Space -> Item:\tPrice:\nPen\t\t$1\nPencil\t$0.5\n");
    printf("Backslash -> C:\\Program Files\\\n\n");

    // 4. Formatting Specifiers
    int age = 25;
    float height = 5.8;
    char grade = 'A';
    char name[] = "John Doe";

    printf("Formatting Specifiers:\n");
    printf("Name: %s\n", name);       // String
    printf("Age: %d years\n", age);  // Integer
    printf("Height: %.1f feet\n", height);  // Float with 1 decimal place
    printf("Grade: %c\n\n", grade);  // Character

    // 5. Taking multiple inputs and printing output
    char user_name[50];
    int user_age;
    float user_height;

    printf("Enter your name: ");
    scanf("%s", user_name);  // Reads a single word string
    printf("Enter your age: ");
    scanf("%d", &user_age);  // Reads an integer
    printf("Enter your height (in meters): ");
    scanf("%f", &user_height);  // Reads a float

    // Displaying user input
    printf("\n--- User Details ---\n");
    printf("Name:\t%s\n", user_name);
    printf("Age:\t%d years\n", user_age);
    printf("Height:\t%.2f meters\n", user_height);

    return 0;
}

// OUTPUT EXAMPLE
// When you run the program, here’s how the interaction and output might look:

/*
Demonstration of printf():
Hello, World!
The value of x is: 10
Value of pi is approximately: 3.14

Enter an integer: 15
You entered: 15

Escape Sequences:
New Line -> This is line 1.
This is line 2.
Tab Space -> Item:	Price:
Pen		$1
Pencil	$0.5
Backslash -> C:\Program Files\

Formatting Specifiers:
Name: John Doe
Age: 25 years
Height: 5.8 feet
Grade: A

Enter your name: Alice
Enter your age: 20
Enter your height (in meters): 1.65

--- User Details ---
Name:	Alice
Age:	20 years
Height:	1.65 meters


*/
