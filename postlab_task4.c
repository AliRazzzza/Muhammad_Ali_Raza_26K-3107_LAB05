#include <stdio.h>

int main() {
    int itemAvailable, restaurantOpen, balanceSufficient;
    printf("Enter 1 if the restaurant is open, otherwise enter 0: ");
    scanf("%d", &restaurantOpen);
    printf("Enter 1 if item is available, otherwise enter 0: ");
    scanf("%d", &itemAvailable);
    printf("Enter 1 if you have sufficient balance, otherwise enter 0: ");
    scanf("%d", &balanceSufficient);
    if(restaurantOpen == 1){
        if(itemAvailable == 1){
            if(balanceSufficient == 1){
                printf("You can order the item\n");
            } else {
                printf("You do not have sufficient balance\n");
            }
        } else {
            printf("The item is not available\n");
        }
    } else {
        printf("The restaurant is closed\n");
    }
    return 0;
}
