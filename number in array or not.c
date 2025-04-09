#include<stdio.h>

int main(){
    int x,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&x);
    int index=0,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        flag=1;
        index=i;  
        }
    }
    if (flag==1){
        printf("The number is present at index %d",index);
    }
    else{
        printf("The number is not present in the array");
    }
    return 0;
}