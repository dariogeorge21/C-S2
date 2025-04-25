#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("test.txt","w");
    if (fp==NULL){
        printf("file not found");
        return 1;
    }
    fprintf(fp,"hello world");
    fclose(fp);
    return 0;
}