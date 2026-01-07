#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];

    // --- Write to file ---
    fp = fopen("data.txt", "w");  // Open in write mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is the first line.\n");
    fclose(fp);

    // --- Read from file ---
    fp = fopen("data.txt", "r");  // Open in read mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    // --- Append to file ---
    fp = fopen("data.txt", "a");  // Open in append mode
    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    fprintf(fp, "This is appended text.\n");
    fclose(fp);

    // --- Final read to confirm ---
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for final read!\n");
        return 1;
    }
    printf("\nFinal file content:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}