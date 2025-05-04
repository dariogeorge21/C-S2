#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ", n);
    int i= 1;
    while(i<=n){
        if(n%i==0){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}