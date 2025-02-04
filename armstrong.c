#include<stdio.h>
#include<math.h>
int main(){
    int n, arm_num=0, tempNum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    tempNum = n;
    int len=0;
    while(tempNum != 0){
        len++;
        tempNum /= 10;
    }
    tempNum = n;
    while(tempNum != 0){
        int digit = tempNum % 10;
        arm_num += pow(digit, len);
        tempNum /= 10;
    }
    if (arm_num==n){
        printf("%d is an Armstrong number.", n);
    }else{
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}