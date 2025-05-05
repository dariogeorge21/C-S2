#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    printf("Enter string1: "); 
    fgets(str1,sizeof(str1),stdin);
    printf("Enter string2: ");
    fgets(str2,sizeof(str2),stdin);

    if(strcmp(str1,str2)==0){
        printf("The strings are equal");
    }
    else if (strcmp(str1,str2)>0){
        printf("First name has ASCII greater value!!");
    }
    else if (strcmp(str1,str2)<0){
        printf("Second name has ASCII greater value!!");
    }
    return 0;
}

/*
Example output:
Enter string1: hello
Enter string2: hello
The strings are equal

Enter string1: zebra
Enter string2: apple
First name is greater value!!

Enter string1: apple
Enter string2: zebra
Second name is greater value!!
*/