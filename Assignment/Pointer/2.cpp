#include<stdio.h>
int main()
{
	int a[10],i=0,gt=0;
	int *p,*q;
	p=a;
	q=&gt;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&*(p+i));
	}
	for(i=0;i<10;i++)
	{
		if(*q<*(p+i))
		{
			*q=*(p+i);
		}
	}
	printf("The Greatest Number is: %d",*q);
	return 0;
}
