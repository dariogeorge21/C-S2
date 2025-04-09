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
    for(int i=0;i<num;i++){
        int check=arr[i],flag=0;
        for (int j=0;j<num;j++){
            if(check==arr[j] && i!=j){
                flag=1;
                break;
            }
        }if(flag==1){
            printf("Number %d is repeated \n ", arr[i]);
        
        }
    }
}