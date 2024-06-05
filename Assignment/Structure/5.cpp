#include <stdio.h>

struct emp_record
{
	int emp_id;
	char emp_name[40];
	int emp_salary;
};
int main()
{
	struct emp_record record[4];
	int i=0,h=0;
	for(i=0;i<3;i++)
	{
		printf("\n Enter id:");
		scanf("%d",&record[i].emp_id);
		fflush(stdin);
		printf("\n Enter name:");
		gets(record[i].emp_name);
		printf("\n Enter salary:");
		scanf("%d",&record[i].emp_salary);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		if(record[i].emp_name[i]=="d"||"D")
		{
			printf("Employee ID: %d\n", record[i].emp_id);
           		printf("Employee Name: %s\n", record[i].emp_name);
            		printf("Employee Salary: %.2f\n", record[i].emp_Salary);
            		printf("\n");
		}
	}
	return 0;
}
