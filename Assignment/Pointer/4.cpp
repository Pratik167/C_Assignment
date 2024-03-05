#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i=0,odd_cnt=0;
	int *p,*q,*r,*s;
	p=a;
	q=b;
	r=c;
	s=&odd_cnt;
	printf("Enter 5 numbers for first array\n");
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&*(p+i));
	}
	printf("Enter 5 numbers for second array\n");
	for(i=0;i<5;i++)
	{
		printf("Enter b[%d]:",i);
		scanf("%d",&*(q+i));
	}
	for(i=0;i<5;i++)
	{
		*(r+i)=*(p+i)+*(q+i);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d+%d=%d",*(p+i),*(q+i),*(r+i));
	}
	for(i=0;i<5;i++)
	{
		if(c[i]%2!=0)
		{
			(*s)++;
		}
	}
	printf("\nThe Number of odd are:%d",*s);
	return 0;
}
