#include <stdio.h>

int scope(int);

int main(){
    int x = 10;
    printf("The value of x is %d\n", x);
    scope(x);
    printf("The value of x is %d\n", x);
    return 0;
}

int scope(int x){
    x = 20;
    printf("The value of x is %d\n", x);
    return 0;
}

/* Sample Output:
The value of x is 10
The value of x is 20
The value of x is 10
*/