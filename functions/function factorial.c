#include <stdio.h>

int factorial(int);

int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial of %d = %d", n, result);
    return 0;
}
int factorial(int x){
    int fact=1;
    for (int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}

/* Sample Output:
Enter a number: 5
Factorial of 5 = 120
*/