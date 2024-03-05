#include<stdio.h>
int main()
{
	int a[10],i=0,even_cnt=0,odd_cnt=0;
	int *p,*q,*r;
	p=a;
	q=&even_cnt;
	r=&odd_cnt;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&*(p+i));
	}
	for(i=0;i<10;i++)
	{
		if(*(p+i)%2==0)
		{
			(*q)++;
		}
		else
		{
			(*r)++;
		}
	}
	printf("The Number of Even is:%d\n",*q);
	printf("The Number of Odd is:%d",*r);
	
	return 0;
	
}
