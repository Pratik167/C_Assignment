#include<stdio.h>
 struct student_record	
 {
 	char name[30];
 	char faculty[5];
 	char email[100];
 	int marks;
 };
 int main()
 {
 	struct student_record a[5];
 	int i=0,h=0;//h bhaneko highest marks ko lagi temp variable only
 	
 	for(i=0;i<5;i++)// remember to use fflush(stdin);
 	{
  		printf("Enter Your Name: ");
  		gets(a[i].name);
  		fflush(stdin);
  		printf("Enter Your Faculty: ");
  		scanf("%d",&a[i].faculty);
  		fflush(stdin);
  		printf("Enter Your Email: ");
  		gets(a[i].email);	
  		fflush(stdin);
  		printf("Enter Your Full Marks: ");
  		scanf("%d",&a[i].marks);
  		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		if(h<a[i].marks)
		{
			h=(a[i].marks);
		}
	}
	printf("\nThe Highest Marks is :%d",h);
	for(i=0;i<5;i++)
	{
		if(h==a[i].marks)//highest marks josko marks sita match hunxa tesko detail matra linxa
		{
			printf("\nName:");
			puts(a[i].name);
			printf("\nFaculty:");
			puts(a[i].faculty);
			printf("Email:");
			puts(a[i].email);
		}
	}
	return 0;
 }
