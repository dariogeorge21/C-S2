#include<stdio.h>

int main(){
    int num,largest=0;
    printf("Enter a number: ");
    scanf("%d", &num);


    while (num!=0){
        int digit = num%10;
        if (digit>largest){
            largest=digit;
        }
        num/=10;
    }
    printf("%d",largest);
}