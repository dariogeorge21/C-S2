#include<stdio.h>

int main(){
    int first=0, second=1, next, n,i=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=first;
    fib[1]=second;
    for(i=2;i<n;i++){
        next=first+second;
        fib[i]=next;
        first=second;
        second=next;
    }
    for(i=0;i<n;i++){
        printf("%d ",fib[i]);
    }

}