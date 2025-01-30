#include<stdio.h>

int main(){
    int num,fac;
    printf("Enter number: ");
    scanf("%d",&num);
    int i=2;
    fac=1;
    while (i<=num){
    	fac=fac*i;
    	i++;
    } printf("The factorial of %d is %d",num,fac);
    return 0;
}
