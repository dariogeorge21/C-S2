#include<stdio.h>

int main(){
    int a=10;
    int* ptr=&a;
    int** ptr1=&ptr;
    int value=**(ptr1);
    printf("%u\n",value);
    return 0;
}