#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","r");
    char buffer[1000];
    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }
    char temp[1000];
    buffer[0]='\0';
    while (fgets(temp,sizeof(temp),fp)!=NULL){
        strcat(buffer,temp);
    }
    fclose(fp);
    char word[100];
    printf("Enter the word to search: ");
    fgets(word,100,stdin);
    if (strstr(buffer,word)!=NULL){
        printf("Word found!!");
    }
    else{
        printf("Word not found!!");
    }
    return 0;
}