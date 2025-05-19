#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","w");

    if (fp=NULL){
        printf("Error Opening File!!");
        return 1;
    }
    fprintf(fp,"Hello this is the content beign added to file!!\n");
    fclose(fp);
    return 0;
}
