#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    FILE *file;
    struct Employee emp[10];//max 10 employees
    float max_salary=0;
    int max_id;
    int e=0,i=0;
//file open hune section for writing all the records
    file=fopen("P:\\employee_records.txt","w");
    if (file==NULL)
	{
        printf("File not found\n");
        exit(0);
    }
    printf("How many employees details you want:");
    scanf("%d",&e);
    
    printf("Enter details for Employees:\n");//employee ko details section
    for (i=0;i<e;i++)
	{
        printf("Employee %d:\n", i+1);
        printf("Id: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        
        fprintf(file,"%d %s %.2f\n",emp[i].id,emp[i].name,emp[i].salary);//prints the details into the file
    }
    fclose(file);
    //again file opening for reading section
    file=fopen("P:\\employee_records.txt", "r");
    if (file==NULL)
	{
        printf("File not found\n");
        exit(0);
    }
    for (i=0;i<e;i++)
	{
        fscanf(file, "%d %s %f",&emp[i].id,&emp[i].name,&emp[i].salary);//scans the details from the file
        if (emp[i].salary>max_salary)
	{
            max_salary=emp[i].salary;
            max_id=emp[i].id;
        }
    }
    fclose(file);
//printing of the employee of the highest salary
    printf("Employee with highest salary:\n");
    printf("ID: %d\n",max_id);
    printf("Salary: %.2f\n",max_salary);

    return 0;
}

