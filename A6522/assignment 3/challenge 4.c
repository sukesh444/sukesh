#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume prime initially

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }

    // Check positive, negative, or zero
    if (num > 0) {
        printf("The number is Positive.\n");
    } else if (num < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }

    // Prime check (only for numbers > 1)
    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // found a divisor
                break;
            }
        }
    }

    if (isPrime) {
        printf("The number is Prime.\n");
    } else {
        printf("The number is Not Prime.\n");
    }

    return 0;
}