/*
Simple Banking System using functions:
1. Deposit
2. Withdraw
3. Check Balance
Menu-driven program
*/

#include <stdio.h>

float deposit(float bal, float amt) 
{
    return bal + amt;
}

float withdraw(float bal, float amt) 
{
    if (amt > bal) 
    {
        printf("Insufficient balance!\n");
        return bal;
    }
    return bal - amt;
}

void checkBalance(float bal) 
{
    printf("Current Balance: %.2f\n", bal);
}

int main() 
{
    float balance = 0, amount;
    int choice;

    while (1) 
    {
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance = deposit(balance, amount);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                balance = withdraw(balance, amount);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}