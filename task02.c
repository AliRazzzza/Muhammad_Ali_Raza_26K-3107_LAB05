#include <stdio.h>
int main(){
    int cnic, isTest;
    printf("do you have a cnic(1 for yes, 0 for no): ");
    scanf("%d", &cnic);
    printf("Have you passed the test(1 for yes, 0 for no): ");
    scanf("%d", &isTest);
    if(cnic == 1){
        if(isTest == 1){
            printf("License can be issued\n");
        }
    }else{
        printf("Not eligible for license\n");
    }
    return 0;
}
