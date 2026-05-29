//5. ATM Withdrawal code
#include <stdio.h>

int main()
{
    int balance = 5000;
    int amount = 0;
    int pin;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);
    printf("Enter Your pin:");
    scanf("%d", &pin);
    if ( pin==1234 && amount > balance)
    {
        printf("Insufficient balance\n");
    }
    else if (pin != 1234)
    {
        printf("Pin is incorrect\n");
    }
    else if (amount % 100 != 0)
    {
        printf("Please enter the amount in multiples of 100\n");
    }
    else
    {
        balance -= amount;
        printf("Please collect your cash\n");
        printf("Transaction successful\n");
    }
    return 0;
}