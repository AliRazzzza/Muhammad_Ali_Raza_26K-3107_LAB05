#include <stdio.h>

int main() {
    int doctorAvailable, registrationCompleted, appointment;
    printf("Enter 1 if the doctor is available, otherwise enter 0: ");
    scanf("%d", &doctorAvailable);
    printf("Enter 1 if the registration is completed, otherwise enter 0: ");
    scanf("%d", &registrationCompleted);
    printf("Enter 1 if you have an appointment, otherwise enter 0: ");
    scanf("%d", &appointment);
    if(appointment == 1){
        if(registrationCompleted == 1){
            if(doctorAvailable == 1){
                printf("You can see the doctor\n");
            } else {
                printf("The doctor is not available\n");
            }
        } else {
            printf("Complete your registration first\n");

        }
    } else {
        printf("You do not have an appointment\n");
    }
    return 0;
}
