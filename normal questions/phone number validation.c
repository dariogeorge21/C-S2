#include<stdio.h>

int main(){
    int number,temp,length=0;
    printf("Enter a phone number: ");
    scanf("%d", &number);

    int flag=1;

    temp=number;

    while(temp!=0){
        temp=temp/10;
        length++;
    }
    if (length!=10){
        flag=0;
    }
    
    if(flag==1){
        printf("Valid phone number\n");
    }
    else{
        printf("Invalid phone number\n");
    }
}

