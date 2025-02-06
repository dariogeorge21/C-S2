#include<stdio.h>
int main (){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int found = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Element found in the array\n");
    }
    else{
        printf("Element not found in the array\n");
    }
    return 0;
}