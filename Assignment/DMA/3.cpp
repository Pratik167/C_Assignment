#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *n;
    int sum=0,rev=0,temp=0;
    int i;
    n=(int*)calloc(10,sizeof(int));
    if(n==NULL)
	{
        printf("Memory allocation failed.\n");
        exit(0);
    }
    printf("Enter 10 numbers:\n");
    for (i=0;i<10;i++)
	{
        scanf("%d", &n[i]);
		{
            sum=sum+n[i];
        }
    }
    temp=sum;
    while(temp!=0)
	{
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(sum==rev)
	{
        printf("The sum %d is a palindrome\n",sum);
    } 
	else
	{
        printf("The sum %d is not a palindrome\n",sum);
    }
    free(n);

    return 0;
}

