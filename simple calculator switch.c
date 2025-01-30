#include<stdio.h>

int main(){
    int num1,num2,result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator: ");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
    	result=num1-num2;
    	break;
    case '*':
        result=num1*num2;
        break;
    case '/':
    	result=num1/num2;
    	break;
    
    default:
    	printf("Wrong Input!!");
        break;
    }
    printf("Result = %d\n",result);
    
    return 0;
}
