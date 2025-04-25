#include<stdio.h>

int double(int[],int);

int main(){
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<sizeof(arr);i++){
        printf("%d",arr[i]);
    }
    double(arr,5);
    printf("\nAfter DOubling function:\n");
    for (int i=0;i<sizeof(arr);i++){
        printf("%d",arr[i]);
    }
}

int double(int x[],size){
    for(int i=0;i<size;i++){
        x[i]=x[i]*2;
    }
}