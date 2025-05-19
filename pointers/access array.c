#include<stdio.h>

int main(){
    int arr[3]={1,3,5};
    int *ptr=arr;
    for(int i=0;i<3;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}