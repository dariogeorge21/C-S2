#include<stdio.h>

int main(){
    int num,j=0,k=0;
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    int arr[num],even[num],odd[num];
    printf("Enter the elements: ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if(arr[i]%2==0){
           even[j]=arr[i];
           j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    printf("Even numbers are:\n ");
    for (int i = 0; i < j; i++)
    {
        if(even[i]!=0){
            printf("%d\t ",even[i]);
        }
    }
    printf("\nOdd numbers are:\n ");
    for (int i = 0; i < k; i++)
    {
        if(odd[i]!=0){
            printf("%d\t ",odd[i]);
        }
    }
}