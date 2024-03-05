#include <stdio.h>
int main()
{
	int a[100],i=0,sum=0;
	int *p,*q;
	p=&sum;
	q=a;
	printf("Enter 10 number:\n ");
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&(*(q+i)));
	}
	for(i=0;i<10;i++)
	{
		if(*(q+i)%2==0)//a[i] is same as *(q+i)||*(a+i) +i means to go to the next block of array
		{
			*p=*p+a[i];
		}
	}
	printf("The Sum of All Even Number is :%d",*p);
	return 0;
}
