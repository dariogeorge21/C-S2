#include<stdio.h>

int main(){
    int a=4;
    int *p=&a;
    int **ptr=&p;
    printf("%d",**ptr);
    return 0;
}