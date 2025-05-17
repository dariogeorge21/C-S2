#include<stdio.h>
#include<string.h>

/* Sample Output:
Enter number of students: 2

Enter details for student 1:
Enter name: John
Enter roll number: 101
Enter mark1: 85
Enter mark2: 90
Enter mark3: 95

Enter details for student 2:
Enter name: Alice
Enter roll number: 102
Enter mark1: 88
Enter mark2: 92
Enter mark3: 87

Student Details:
Name: John
Roll Number: 101
Total Marks: 270
Average: 90.00
Grade: A

Name: Alice
Roll Number: 102
Total Marks: 267
Average: 89.00
Grade: A

Note: Demonstrates structure usage with arrays and grade calculation
*/

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