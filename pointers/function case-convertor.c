#include<stdio.h>

void converter(char *str);

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    converter(str);
    // printf("The string is: %s", str);
    puts(str);
    return 0;
}

void converter(char *str){
    char *ptr=str;

    while (*ptr!='\0'){
        if (*ptr>='A' && *ptr<='Z'){
            *ptr=*ptr+32;
        }
        else if(*ptr>='a' && *ptr<='z'){
            *ptr=*ptr-32;
        }
        ptr++;
    }
}