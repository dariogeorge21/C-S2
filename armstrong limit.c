// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for (int num=1;num<=limit;num++){
        int tempNum,length=0,armNum=0;
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
            printf("%d is Armstrong!!\n",num);
        }
        else{
            printf("%d is not armstrong!!\n",num);
        }
    }
    return 0;
}