#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int len=0;
    while (str[len]!='\0'){
        len++;
    }
    printf("Reverse of string: ");

    
    for (int i=0; i<len/2; i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    puts(str);
    return 0;
}