#include<stdio.h>

int main(){
    int num1,num2,result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator: ");
    scanf("%c",&operator);
    
    if (operator='+'){
        result=num1+num2;
    } else if (operator='-'){
        result=num1-num2;
    } else if (operator='*'){
        result=num1*num2;
    } else if (operator='/'){
        result=num1/num2;
    } else {
        printf("Wrong Input!!");
        void* result=NULL;
    }
    printf("\nResult: %d\n",result);
    
    return 0;
}
