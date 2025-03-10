#include<stdio.h>

int main(){
    int var=1;
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("%d ", var);
            var=(!var);
        }
        printf("\n");
    }
}