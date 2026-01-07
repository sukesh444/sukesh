#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;  // Cast to float for decimal division
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    int x, y;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call functions
    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", subtract(x, y));
    printf("Multiplication: %d\n", multiply(x, y));
    printf("Division: %.2f\n", divide(x, y));

    return 0;
}