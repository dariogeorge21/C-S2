#include<stdio.h>

int max(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("The maximum element in the array is %d",max(arr,n));
    return 0;
}

int max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

/* Sample Output:
The maximum element in the array is 10
*/