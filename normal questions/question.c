#include<stdio.h>
#include<string.h>

int main(){
    char empId, empName[50], empStatus;
    int basePay;
    float DA=0, HRA=0;

    printf("Enter employee ID: ");
    scanf("%c", &empId);
    printf("Enter employee name: ");
    scanf("%s", empName);
    printf("Enter employee status (P for Part-time, F for full-time): ");
    scanf(" %c", &empStatus);
    printf("Enter base pay: ");
    scanf("%d", &basePay);

    if (empStatus == 'F') {
        DA = basePay * 0.75;
        HRA = basePay * 0.10;
    } 
    printf("\nDetails of Employee\n");
    printf("====================================\n");
    printf("Employee ID: %c\n", empId);
    printf("Employee Name: %s\n", empName);
    printf("Employee Status: %c\n", empStatus);
    printf("Base Pay: %d\n", basePay);
    printf("DA: %.2f\n", DA);
    printf("HRA: %.2f\n", HRA);
    printf("Total Salary: %.2f\n", basePay + DA + HRA);
    return 0;
}
