#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num%2==0 ? printf("The number is even") : printf("The number is odd"); //ternary operator or conditional operator
    return 0;
}