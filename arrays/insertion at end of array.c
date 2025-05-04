#include<stdio.h>

int main(){
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&x);
    arr[n]=x;
    printf("The array after insertion is: ");
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}