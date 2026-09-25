#include <stdio.h>

int main(){
    int operation, account;

    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");

    printf("\nEnter your choice: ");
    scanf("%d", &operation);

    switch (operation){
        case 1:
            printf("\nYou selected: Balance Inquiry");
            break;

        case 2:
            printf("\nYou selected: Cash Withdrawal\n");

            printf("\nSelect Account:");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter your choice: ");
            scanf("%d", &account);

            switch (account)
            {
                case 1:
                    printf("\nCash Withdrawal from Savings Account selected.\n");
                    break;

                case 2:
                    printf("\nCash Withdrawal from Current Account selected.\n");
                    break;

                default:
                    printf("\nInvalid account choice.\n");
            }
            break;

        case 3:
            printf("\nYou selected: Cash Deposit\n");
            break;

        case 4:
            printf("\nYou selected: PIN Change\n");
            break;

        default:
            printf("\nInvalid operation choice.\n");
    }

    return 0;
}
