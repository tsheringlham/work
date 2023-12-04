#include <stdio.h>

// Function to deposit money into the account
void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposited $%.2f\n", amount);
}

// Function to withdraw money from the account
void withdraw(float *balance, float amount) {
    if (*balance >= amount) {
        *balance -= amount;
        printf("Withdrawn $%.2f\n", amount);
    } else {
        printf("Insufficient balance\n");
    }
}

// Function to check balance
void checkBalance(float balance) {
    printf("Your account balance is: $%.2f\n", balance);
}

int main() {
    float accountBalance = 100000.00; // Initial balance
    char account[20]="5100189929001";
    int choice;
    float amount;

    while (1) {
        printf("\nBanking System\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("5.info\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&accountBalance, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&accountBalance, amount);
                break;
            case 3:
                checkBalance(accountBalance);
                break;
            case 4:
                printf("Thank you for using our banking system!\n");

            case 5:
                printf("Personal Information\n ACCOUNT NUMBER :%s",account);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
