// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int limit,sum=0;
    printf("Enter limit: ");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        sum+=i;
    }
    printf("Sum is: %d\n",sum);
    return 0;
}