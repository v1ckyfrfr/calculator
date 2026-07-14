#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kg = 0.0f;

    printf("Weight Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your Choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the Weight in Kilograms: ");
        scanf("%f", &kg);
        pounds = kg * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kg, pounds);
    }
    else if(choice == 2){
      printf("Enter the weight in Pounds: ");
      scanf("%f", &pounds);
      kg = pounds / 2.20462;
      printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kg); 
    }
    else{
        printf("Enter the Choice!\n");
    }


    return 0;
}