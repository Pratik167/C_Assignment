#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p;
    int i=0;
    p=(int*)calloc(10,sizeof(int));
    if (p==NULL)
	{
        printf("Memory allocation failed.\n");
        exit(0);
    }
    printf("Enter 10 numbers:\n");
    for (i=0;i<10;i++)
	{
        scanf("%d",&p[i]);
    }
    printf("\n In reverse order:\n");
    for (i=9;i>=0;i--)
	{
    	printf("%d\n",p[i]);
    }
    printf("\n");
    free(p);

    return 0;
}

