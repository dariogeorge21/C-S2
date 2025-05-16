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
    int index, found = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            found = 1;
            index=i;
            break;
        }
    }
    if(found){
        printf("Element found in the array at index %d\n",index);
    }
    else{
        printf("Element not found in the array\n");
    }
    return 0;
}

/* Sample Output:
Enter the size of the array: 5
Enter the elements of the array: 10 20 30 40 50
Enter the element to search: 30
Element found in the array at index 2

Enter the size of the array: 5
Enter the elements of the array: 10 20 30 40 50
Enter the element to search: 60
Element not found in the array
*/
