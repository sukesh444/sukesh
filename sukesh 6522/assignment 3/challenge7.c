#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0, vowelCount = 0;
    int isPalindrome = 1;  // Assume true initially

    // Step 1: Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word (no spaces)

    // Step 2: Find length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Step 3: Reverse string manually
    for (i = 0, j = length - 1; i < length; i++, j--) {
        rev[i] = str[j];
    }
    rev[length] = '\0';  // Null terminate reversed string

    // Step 4: Count vowels
    for (i = 0; i < length; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    // Step 5: Check palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Step 6: Print results
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", rev);
    printf("Vowel Count: %d\n", vowelCount);
    if (isPalindrome)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    return 0;
}