#include<stdio.h>

/* Sample Output:
Enter the number of rows: 4

Floyd's Triangle:
1 
2 3 
4 5 6 
7 8 9 10 

Note: Floyd's Triangle is a right-angled triangular array of natural numbers.
Each row contains one more number than the previous row,
starting with 1 in the first row.
*/

int main(){
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}