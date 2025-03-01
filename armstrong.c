
#include <stdio.h>
#include<math.h>
int main() {
    int num,tempNum,length=0,armNum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    tempNum=num;
    while (tempNum!=0){
        length++;
        tempNum/=10;
    }
    tempNum=num;
    while (tempNum!=0){
        int digit=tempNum%10;
        armNum+=(pow(digit,length));
        tempNum/=10;
    }
    if (armNum==num){
        printf("%d is Armstrong!!",num);
    }
    else{
        printf("%d is not armstrong!!",num);
    }
    return 0;
}