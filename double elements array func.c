#include<stdio.h>

void duble(int[],int);

int main(){
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    duble(arr,5);
    printf("\nAfter DOubling function:\n");
    for (int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}

void duble(int x[],int size){
    for(int i=0;i<size;i++){
        x[i]=x[i]*2;
    }
}