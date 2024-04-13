#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
    int *n;
    int i=0,sum=0,temp=0,temp2=0,r=0,d=0;
    n=(int*)calloc(10,sizeof(int));
    if(n==NULL) 
	{
        printf("No memory allocation");
        exit(0);
    }
    printf("Enter 10 numbers:\n");
    for (i=0;i<10;i++)
	{
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    temp=sum;
    temp2=sum;
    while(temp!=0)
	{
    	d=temp%10;
        r=pow(d,3)+r;
        temp=temp/10;
   	}
    if(sum==temp2)
	{
        printf("The sum %d is an Armstrong number\n", sum);
    }
	else 
	{
        printf("The sum %d is not an Armstrong number\n", sum);
    }
    free(n);
    return 0;
}

