#include <stdio.h>
int main()
{
	char a[100];
	int i=0;
	printf("Enter your word: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("The ASCII Value of String %c is: %d\n",a[i],a[i]);
	}
	return 0;
}
