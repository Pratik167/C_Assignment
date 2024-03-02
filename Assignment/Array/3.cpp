#include<stdio.h>
int main() 
{
    int i=0,count_e=0,count_o=0,a[10];
    
    for(i=0;i<10;i++) 
	{
        printf("Enter number a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++) 
	{
		if(a[i]%2==0)
		{
			count_e++;
		}
		else
		{
			count_o++;
		}
    }
    printf("The number of even are:%d\n and \nThe Number of odd are:%d",count_e,count_o);
    return 0;
}

