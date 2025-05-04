#include<stdio.h>

int main(){
    int i=0,flag=0;
    char str1[20],str2[20];
    printf("Enter the string 1: ");
    fgets(str1,20,stdin);
    printf("Enter the string 2: ");
    fgets(str2,20,stdin);
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("Strings are equal");
    }else{
        printf("Strings are not equal");
    }
    return 0;
}