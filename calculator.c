#include <stdio.h>

int main(){
char operation;
double num1, num2, result;

printf("== C-calculator ==\n");
printf("Select an Operator (+, -, *, /): ");

scanf(" %c", &operation);

printf("Insert two numbers (e.g 5 3): ");
scanf("%lf %lf", &num1, &num2);

switch (operation) {
    case '+':
    result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    break;
    case '-':
    result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    break;
    case '*':
    result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    break;
    case '/':
    if(num2 != 0){
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    }
    else{
        printf("cannot divide by zero\n");
    }
    break;
    default:
    printf("error: operator %c not valid\n", operation);
}

return 0;

}