#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    // Step 1: Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Array size based on user input (no hardcoding)

    // Step 2: Read elements into array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize largest and smallest
    int largest = arr[0];
    int smallest = arr[0];

    // Step 4: Iterate through array
    for (i = 0; i < n; i++) {
        sum += arr[i];  // Calculate sum

        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Step 5: Calculate average
    average = sum / n;

    // Step 6: Print results
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}