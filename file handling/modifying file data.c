// to convert all uppercase to lowercase in file

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
    for (int i=0;buffer[i]!='\0';i++){
        if (isupper(buffer[i])){
            buffer[i]=tolower(buffer[i]);
        }
        if (islower(buffer[i])){
            buffer[i]=toupper(buffer[i]);
        }
    }
    fp=fopen("file.txt","w");
    fputs(buffer,fp);
    fclose(fp);
    return 0;
}