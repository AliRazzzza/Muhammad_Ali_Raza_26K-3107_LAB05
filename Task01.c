#include <stdio.h>
int main(){
    int age, marks;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(age >= 18){
        if(marks >= 50){
            printf("Eligible for admission\n");

        }
    }else{
        printf("Not eligible for admission\n");
    }
    return 0;
}
