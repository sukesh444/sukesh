#include <stdio.h>

int main() {
    char name[50];   // string for name
    int age;         // integer for age
    float salary;    // float for salary

    // Asking for inputs
    printf("Enter your name: ");
    scanf("%s", name);   // %s for string

    printf("Enter your age: ");
    scanf("%d", &age);   // %d for integer

    printf("Enter your salary: ");
    scanf("%f", &salary); // %f for float

    // Printing neatly
    printf("\n--- User Details ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Salary : %.2f\n", salary); // %.2f for 2 decimal places

    return 0;
}
