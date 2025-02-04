#include<stdio.h>
#include<math.h>

int main(){
    int limit, arm_num, tempNum;
    printf("Enter an integer: ");
    scanf("%d", &limit);
    for (int i = 1; i <=limit; i++){
        int n = i;
        int len = 0;
        int sum = 0;
        while(n != 0){
            len++;
            n /= 10;
        }
        n = i;
        while(n != 0){
            arm_num = n % 10;
            sum += pow(arm_num, len);
            n /= 10;
        }
        if (sum == i){
            printf("%d is an Armstrong number.\n", i);
        }else{
             printf("%d is not an Armstrong number.\n", i);
        }
    }
    

    return 0;
}