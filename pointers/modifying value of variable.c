#include<stdio.h>

int modify(int *number);

int main(){
    int var=4;
    modify(&var);
    printf("The value of var is %d",var);
    return 0;

}

int modify(int *number){
    *number=10;
}