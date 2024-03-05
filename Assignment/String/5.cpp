#include<stdio.h>
int main()
{
	char a[100],i=0;
	printf("Enter your word: ");
	gets(a);
	for(i=0;a[i] !='\0';i++)
	{
		if(a[i]>96&&a[i]<123)
		{
			a[i]=a[i]-32 ;
		}
	}
	for(i=0;a[i] !='\0';i++)// or can simply do puts(a)
	{
		printf("%c",a[i]);
	}
	return 0;
}
