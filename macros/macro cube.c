#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))  // Added parentheses for operator precedence

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Cube of %d is %d\n", num, CUBE(num));  // Added newline, changed to uppercase
    return 0;
}

/* Sample Output:
Enter a number: 5
Cube of 5 is 125
*/

