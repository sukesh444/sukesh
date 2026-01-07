#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y, n, i;

    // --- Swap two numbers ---
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Swap:\n");
    printf("x = %d, Address of x = %p\n", x, (void*)&x);
    printf("y = %d, Address of y = %p\n", y, (void*)&y);

    swap(&x, &y);

    printf("\nAfter Swap:\n");
    printf("x = %d, Address of x = %p\n", x, (void*)&x);
    printf("y = %d, Address of y = %p\n", y, (void*)&y);

    // --- Traverse array using pointers ---
    printf("\nEnter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;  // Pointer to first element of array

    printf("\nTraversing array using pointers:\n");
    for (i = 0; i < n; i++) {
        printf("Value = %d, Address = %p\n", *(ptr + i), (void*)(ptr + i));
    }

    return 0;
}