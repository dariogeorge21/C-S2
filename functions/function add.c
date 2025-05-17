#include<stdio.h>

int add(int, int);

int main(){
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("Sum is %d\n", sum);
    return 0;
}

int add(int a, int b){
    return a + b;
}

/*
Output:
Enter two numbers: 5 3
Sum is 8
*/