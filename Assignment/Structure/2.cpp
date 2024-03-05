 #include<stdio.h>

struct student_record 
{
    char name[30];
    int roll;
    int maths;
    int c_program;
    int english;
};
int main() 
{
    struct student_record a[5];
    int i=0;
    int pass[3]={0};//fixed via chatgpt
    for (i=0;i<5;i++) 
	{
        printf("Enter Your Name: ");
        gets(a[i].name);
        fflush(stdin);
        printf("Enter Your Roll no: ");
        scanf("%d", &a[i].roll);
        fflush(stdin);
        printf("Enter Marks For Maths: ");
        scanf("%d", &a[i].maths);
        fflush(stdin);
        printf("Enter Marks For C_program: ");
        scanf("%d", &a[i].c_program);
        fflush(stdin);
        printf("Enter Marks For English: ");
        scanf("%d", &a[i].english);
        fflush(stdin);
    }
    for (i=0;i<5;i++) 
	{
        if (a[i].c_program>=40)
		 {
            pass[i]=1;
        }
    }
    printf("\nStudents who passed C_program:\n");
    for (i=0;i<5;i++) 
	{
        if (pass[i]==1) 
		{
            printf("Name: %s\n",a[i].name);
            printf("Roll: %d\n\n",a[i].roll);
        }
    }
    return 0;
}

