#include <stdio.h>
int prime(int);

int main() 
{
    int result=0,n=0;
    printf("\nEnter your number: ");
    scanf("%d",&n);

    result=prime(n);
    if (result == 1) 
	{
        printf("\nThe number is prime.\n");
    } 
	else 
	{
        printf("The number is not prime.\n");
    }
    return 0;
}

int prime(int x) 
{
    int i=0;
    if (x<=1) 
	{
        return 0;
    }
    for (i=2;i*i<=x;i++) 
	{
        if (x%i== 0)
		{
            return 0;
        }
    }
    return 1;
}

