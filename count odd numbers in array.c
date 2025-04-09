#include<stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0; i<num; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("The number of odd numbers in the array is: %d", count);
    return 0;
}