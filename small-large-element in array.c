#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int small = arr[0], large = arr[0],indexL,indexS;
    for(int i=1; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
            indexS=i;
        }
        if(arr[i] > large){
            large = arr[i];
            indexL=i;
        }
    }
    printf("The smallest element at index %d in the array is: %d\n",indexS, small);
    printf("The largest element at index %d in the array is: %d\n",indexL, large);
    return 0;
}
