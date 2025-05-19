#include<stdio.h>
#include<string.h>
#include<ctype.h>

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
    int count=0;
    for (int i=0;buffer[i]!='\0';i++){
        if (isdigit(buffer[i])){
            count++;
        }
    }
    printf("Total Number of Digits: %d",count);
    return 0;
}