#include<stdio.h>

int main(){
    float num1,num2,result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator: ");
    scanf(" %c",&operator);
    
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2lf\n", (float)num1 / num2);
        }else{
            printf("Error! Division by zero is not allowed.\n");

        }
    } else if (operator == '%') {
        if (num2 != 0) {
            printf("Result: %.2lf\n", (float)((int)num1 % (int)num2));
        }else{
            printf("Error! Division by zero is not allowed.\n");
        }
    
    }
     else {
        printf("Invalid operator!\n");
    }return 0;
}
/* Sample Output:
Enter two numbers: 10 5
Enter operator: +
Result: 15.00

Enter two numbers: 10 5
Enter operator: /
Result: 2.00

Enter two numbers: 10 0
Enter operator: /
Error! Division by zero is not allowed.

Enter two numbers: 10 5
Enter operator: *
Result: 50.00
*/