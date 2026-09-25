#include <stdio.h>

int main() {
    int bal;
    printf("Enter your balance: ");
    scanf("%d", &bal);
    if(bal < 500){
      printf("low balance\n");
    }else if(bal >= 500 && bal <= 2000){
      printf("sufficient balance\n");
    }else if(bal > 2000){
      printf("Premium balance\n");
    }
    
    return 0;
}
