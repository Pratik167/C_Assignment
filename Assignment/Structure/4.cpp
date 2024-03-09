#include <stdio.h>
#include <string.h>
struct emp_records
{
	int emp_id;
	char emp_name[30];
	float emp_salary;
};
int main()
{
	struct emp_records a[5];
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
	printf("Employee number %d\n",i+1);
	printf("Enter Id: ");
	scanf("%d",&a[i].emp_id);
	fflush(stdin);
	printf("Enter Name: ");
	gets(a[i].emp_name);
	fflush(stdin);
	printf("Enter Salary: ");
	scanf("%f",&a[i].emp_salary);
	printf("\n\n");
	}
	struct emp_records highest_salary[3];
    for (i=0;i<3;i++) 
	{
        int max=0;
        for (j=1;j<5;j++) 
		{
            if (a[j].emp_salary > a[max].emp_salary) 
			{
                max=j;
            }
        }
        highest_salary[i] = a[max];
        a[max].emp_salary = -1;
    }
    printf("\nEmployees with the highest salary:\n");
    for (int i = 0; i < 3; i++) 
	{
        printf("Employee ID: %d\n", highest_salary[i].emp_id);
        printf("Employee Name: %s\n", highest_salary[i].emp_name);
        printf("Employee Salary: %.2f\n\n", highest_salary[i].emp_salary);
    }
	return 0;
}
