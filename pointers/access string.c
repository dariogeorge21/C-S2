#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}