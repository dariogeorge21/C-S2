#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    int marks;
};

void printStruct(struct student[],int);
int main(){
    struct student students[5];
    for(int i=0;i<5;i++){
        printf("Enter student %d name: ",i+1);
        scanf("%s",students[i].name);
        getchar();//clear buffer
        printf("Enter student %d roll: ",i+1);
        scanf("%d",&students[i].roll);
        printf("Enter student %d marks: ",i+1);
        scanf("%d",&students[i].marks);
        getchar();//clear buffer
    }
    printf("\nStudent Details:\n")
    printStruct(students,5);
    return 0;
}

void printStruct(struct student students[],int n){
    for(int i=0;i<n;i++){
        printf("\nStudent %d:\n",i+1);
        printf("Student %d name: %s\n",i+1,students[i].name);
        printf("Student %d roll: %d\n",i+1,students[i].roll);
        printf("Student %d marks: %d\n",i+1,students[i].marks);
    }
}