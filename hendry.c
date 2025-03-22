#include <stdio.h>

int main()
{

    int balance = 50000;  // Initial mobile money balance
    int withdraw = 20000; // Amount to withdraw
    int new_balance;

    // Calculate account balance
    new_balance = balance - withdraw;

    // Output the new balance
    printf("Your new balance is: %d\n", new_balance);

    return 0;
}