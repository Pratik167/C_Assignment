#include <stdio.h>
int main() 
{
    int i=0,j=0,k=0;
    for (i=5;i>=1;i--) 
	{
        for (k=i;k<5;k++) 
		{
            printf("  ");
        }
        for (j=1;j<=2*i-1;j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
