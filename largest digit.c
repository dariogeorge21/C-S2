#include<stdio.h>

int main(){
    int num, max = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num != 0){
        if (num % 10 > max){
            max = num % 10;
        }
        num /= 10;
    }
    printf("The largest digit is %d.\n", max);
    return 0;
}