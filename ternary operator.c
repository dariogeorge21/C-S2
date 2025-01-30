#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a>b?printf("BIG NUMBER: %d\n",a):printf("BIG NUMBER: %d\n",b);
    return 0;
}
