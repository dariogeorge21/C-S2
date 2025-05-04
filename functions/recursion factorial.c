#include<stdio.h>

int factorial(int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0){
        printf("Factorial of negative number is not possible");
        return 0;
    }
    int result=factorial(num);
    printf("Factorial of %d is %d\n",num,result);
    return 0;
}

int factorial(int x){
    if (x<=1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}