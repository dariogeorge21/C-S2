#include<stdio.h>

int main(){
    int n, sum = 0, arm_num, tempNum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    tempNum = n;
    int len;
    while(tempNum != 0){
        len++;
        tempNum /= 10;
    }
    tempNum = n;
    while(tempNum != 0){
        arm_num = tempNum % 10;
        sum += pow(arm_num, len);
        tempNum /= 10;
    }
    if (arm_num==n){
        printf("%d is an Armstrong number.", n);
    }else{
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}