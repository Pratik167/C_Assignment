#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a=0,b=0,result=0;
	printf("Enter Number a:");
	scanf("%d",&a);
	printf("Enter Number b:");
	scanf("%d",&b);
	result=swap(&a,&b);
	{
		printf("Swapping......................\n");
		printf("a=%d\nb=%d",a,b);
	}
	return 0;
}
int swap(int *p,int *q)
{
	int temp=0;
	if(*p!=*q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
	return *p,*q;
}
