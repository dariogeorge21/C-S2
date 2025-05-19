#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","r");
    char buffer[100];
    char temp[100];

    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }//exception handling

    buffer[0]='\0';

    while (fgets(temp,sizeof(temp),fp)!=NULL){
        strcat(buffer,temp);
    }
    fclose(fp);
    int count=0,inWord=0;
    for (int i=0;buffer[i]!='\0';i++){
        

        if(buffer[i]!=' ' && buffer[i]!='\t' && buffer[i]!='\n'){
            if (!inWord){
                count++;
                inWord=1;
            }
            
        }
        else{
            inWord=0;
        }
    }printf("Total Number of Words: %d",count);
    return 0;
}