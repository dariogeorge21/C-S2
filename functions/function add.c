#include<stdio.h>

int add(int, int);

int main(){
    int num1, num2, sum;
    sum=add(num1, num2);
    printf("sum is %d", sum);
    return 0;
}

int add(int a, int b){
    int sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    return sum;
}