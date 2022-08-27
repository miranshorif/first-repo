#include<stdio.h>
#include<conio.h>
void main()
{
    long int salary;
    printf("Enter Basic salary of an employee:");
    scanf("%d",&salary);
    if(salary < 20000)
        {
            salary=salary+5000;
        }
    printf("Employee Salary is:%d\n",salary);
    getch();
}

