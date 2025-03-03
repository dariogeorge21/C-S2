#include<stdio.h>

int main(){
    int num,revNUm=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        revNUm = revNUm*10 + temp%10;
        temp = temp/10;
    }
    if(revNUm == num){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
    
    return 0;
}