#include <stdio.h>

int main(){

    char choices = '\0';
    float fahrenheit = 0.0f;
    float celcius = 0.0f;

    printf("Temperature Calculation\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    printf("Is the temp in Celcius or Fahrenheit?: ");
    scanf("%c", &choices);

    if(choices == 'C'){
        printf("Enter the temperature in celcius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.1f celcius is equal to %.1f fahrenheit\n", celcius, fahrenheit);
    }
    else if(choices == 'F'){
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is equal to %.1f celcius\n", fahrenheit, celcius);
    }
    else{
        printf("Invalid Choices");
    }


    return 0;
}