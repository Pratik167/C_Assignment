#include<stdio.h>
int main() 
{
    int i=0,count=0,j=1,a[10];
    
    for(i=0;i<10;i++) 
	{
        printf("Enter number a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++) 
	{
        count=0;
        for(j=1;j<=a[i];j++) 
		{
            if(a[i]%j==0) 
			{
                count++;
            }
        }
        if(count==2) 
		{
            printf("%d is prime\n",a[i]);
        }
    }
    return 0;
}

