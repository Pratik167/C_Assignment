#include<stdio.h>
int main()
{
	int i=0,a[10],temp=0,j=0,oddcnt=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the Elements a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	for(j=0;j<10-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
	for(i=0;i<10;i++)
	{
	printf("%d\n",a[i]);
}
for(i=0;i<10;i++)
{
	if((a[i])%2!=0)
	{
		oddcnt++;
	}
}
printf("The Number of Odd Are:%d",oddcnt);
	return 0;
}
