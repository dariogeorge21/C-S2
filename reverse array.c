#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is: ");
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i=0;i<num/2;i++){
        int temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }

    printf("The reversed array is: ");
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}