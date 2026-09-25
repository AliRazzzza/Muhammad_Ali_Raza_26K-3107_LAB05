#include <stdio.h>
int main(){
 int temperature;
  printf("Enter the temperature in celcius: ");
  scanf("%d", & temperature);
  if(temperature < 15){
    printf("\nits cold!");
  }else if(temperature >= 15 && temperature <= 30){
    printf("\nNormal");
  }else if(temperature > 30){
    printf("\nits hot!");
  }
  return 0;
}
