#include <stdio.h>

#define MAX_CUSTOMERS 200

typedef struct {
    int account_number;
    char name[50];
    float balance;
} Customer;

void printLowBalanceCustomers(Customer customers[], int count) {
    printf("Customers with balance below 100 rupees:\n");
    for (int i = 0; i < count; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].account_number, customers[i].name);
        }
    }
}

void handleTransaction(Customer customers[], int count, int account_number, float amount, int code) {
    for (int i = 0; i < count; i++) {
        if (customers[i].account_number == account_number) {
            if (code == 0) { // Withdrawal
                if (customers[i].balance >= amount) {
                    if ((customers[i].balance - amount) < 100) {
                        printf("The balance is insufficient for the specified withdrawal. Balance would fall below 100.\n");
                    } else {
                        customers[i].balance -= amount;
                        printf("Withdrawal successful. New balance: %.2f\n", customers[i].balance);
                    }
                } else {
                    printf("Insufficient balance for withdrawal.\n");
                }
            } else if (code == 1) { // Deposit
                customers[i].balance += amount;
                printf("Deposit successful. New balance: %.2f\n", customers[i].balance);
            }
            return;
        }
    }
    printf("Account number not found.\n");
}

int main() {
    Customer customers[MAX_CUSTOMERS] = {
        {101, "Alice", 50.0},
        {102, "Bob", 150.0},
        {103, "Charlie", 75.0},
        // Add more customers as needed
    };
    int count = 3; // Change this to the actual number of customers

    printLowBalanceCustomers(customers, count);

    int account_number;
    float amount;
    int code;

    printf("Enter account number for transaction: ");
    scanf("%d", &account_number);
    printf("Enter amount for transaction: ");
    scanf("%f", &amount);
    printf("Enter transaction type (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);

    handleTransaction(customers, count, account_number, amount, code);

    return 0;
}