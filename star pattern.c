#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++){ //floyd pattern or normal star pattern
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("Next Pattern\n");
    for (int i = 0; i < n; i++){ //reverse floyd pattern
        for(int j = 0; j <= n-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("Next Pattern\n");
    for (int i = 0; i <= n; i++){ //reverse star pattern
        for(int j = n; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}