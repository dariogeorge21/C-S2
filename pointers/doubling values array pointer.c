#include<stdio.h>

int doubleValues(int *arr, int size);

int main(){
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter the elements: ");
    for (int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    doubleValues(arr,limit);
    printf("The array elements are: \n");
    for (int i=0;i<limit;i++){
        printf("%d\t",arr[i]);
    }
}

int doubleValues(int *arr, int size){
    for (int i=0;i<size;i++){
        *(arr+i)*=2;
    }
}