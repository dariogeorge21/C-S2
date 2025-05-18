#include <stdio.h>

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d",&limit);
    
    for (int i=0;i<limit;i++){
        for (int j=0;j<limit-i;j++){
            printf("  ");
        }
        for (int j=0;j<i+1;j++){
            printf("* ");
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
