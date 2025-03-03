#include<stdio.h>

int main(){
    int num;
    printf("ENter a number: ");
    scanf("%d",&num);
    flag=1;

    for (int i=2;i<num;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if flag==1{
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
}