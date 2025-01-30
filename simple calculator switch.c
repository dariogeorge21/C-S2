#include<stdio.h>

int main(){
    float num1,num2,result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator: ");
    scanf(" %c",&operator);
switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}
