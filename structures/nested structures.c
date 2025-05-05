#include<stdio.h>
#include<string.h>

struct dob{
    int dd;
    int mm;
    int yy;
};

struct student{
    char name[20];
    int roll;
    int marks;
    struct dob date;
};

void printStruct(struct student[],int);

/* Sample Output:
Enter Employee Details:
Enter name: John Smith
Enter ID: 1001
Enter department: IT
Enter joining date (dd mm yyyy): 15 03 2023
Enter salary: 50000

Employee Information:
Name: John Smith
ID: 1001
Department: IT
Join Date: 15/3/2023
Salary: 50000.00

Note: This program demonstrates:
- Nested structures (date structure within employee structure)
- Reading complex data with multiple scanf calls
- Formatted printing of structured data
*/

int main(){
    int limit;
    printf("Enter the number of students: ");
    scanf("%d",&limit);
    struct student students[limit];
    for (int i=0;i<limit;i++){
        printf("Enter student %d name: ",i+1);
        scanf("%s",students[i].name);
        getchar(); //clear buffer
        printf("Enter student %d roll: ",i+1);
        scanf("%d",&students[i].roll);
        printf("Enter student %d marks: ",i+1);
        scanf("%d",&students[i].marks);
        printf("Enter student %d date of birth (dd mm yyyy): ",i+1);
        scanf("%d %d %d",&students[i].date.dd,&students[i].date.mm,&students[i].date.yy);
        getchar();
        printf("\n");
    }
    printf("\nStudent Details:\n");
    printStruct(students,limit);
    return 0;
}

void printStruct(struct student students[],int limit){
    for(int i=0;i<limit;i++){
        printf("Student %d name: %s\n",i+1,students[i].name);
        printf("Student %d roll: %d\n",i+1,students[i].roll);
        printf("Student %d marks: %d\n",i+1,students[i].marks);
        printf("Student %d date of birth: %d/%d/%d\n",i+1,students[i].date.dd,students[i].date.mm,students[i].date.yy);
        printf("\n");
    }
}