#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i=2;i<n;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("Fibonacci series: ");
    for (int i=0;i<n;i++){
        printf("%d ", fib[i]);
    }
    return 0;
}

/*
Output:
Enter the number of terms: 8
Fibonacci series: 0 1 1 2 3 5 8 13 
*/