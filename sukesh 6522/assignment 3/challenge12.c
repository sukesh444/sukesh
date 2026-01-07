#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    char name[50];
    int accNo;
    float balance;
};

// Function to create account
void createAccount(struct Account *acc) {
    printf("Enter account holder name: ");
    scanf("%s", acc->name);
    printf("Enter account number: ");
    scanf("%d", &acc->accNo);
    acc->balance = 0;
    printf("Account created successfully!\n");
}

// Function to deposit
void deposit(struct Account *acc, float amount) {
    acc->balance += amount;
    printf("Deposited %.2f successfully. New balance = %.2f\n", amount, acc->balance);
}

// Function to withdraw
void withdraw(struct Account *acc, float amount) {
    if (amount > acc->balance) {
        printf("Insufficient balance!\n");
    } else {
        acc->balance -= amount;
        printf("Withdrawn %.2f successfully. New balance = %.2f\n", amount, acc->balance);
    }
}

// Function to check balance
void checkBalance(struct Account *acc) {
    printf("Account No: %d | Name: %s | Balance: %.2f\n", acc->accNo, acc->name, acc->balance);
}

// Function to save account data to file
void saveToFile(struct Account *acc) {
    FILE *fp = fopen("accounts.txt", "a"); // append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fp, "Account No: %d | Name: %s | Balance: %.2f\n", acc->accNo, acc->name, acc->balance);
    fclose(fp);
    printf("Data saved to file successfully!\n");
}

int main() {
    struct Account acc;
    int choice;
    float amount;

    while (1) {
        printf("\n--- Banking Menu ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Save Data to File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&acc);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&acc, amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&acc, amount);
                break;
            case 4:
                checkBalance(&acc);
                break;
            case 5:
                saveToFile(&acc);
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}