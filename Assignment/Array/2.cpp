#include <stdio.h>

int main() 
{
    int i=0,temp=0,a[10];
    printf("Enter 10 numbers:\n");
    for (i=0;i<10;i++) 
	{
        printf("Enter number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++) 
	{
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }
    printf("The reverse order are:\n");
    for (i=0;i<10;i++)
	 {
        printf("%d\n",a[i]);
    }
    printf("\n");
    
    return 0;
}

