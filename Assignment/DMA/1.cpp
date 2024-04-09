#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n=0,i=0,count=0;
    int *p;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    p=(int*)calloc(n, sizeof(int));
    if(p==NULL) 
	{
        printf("Memory not allocated.");
        exit(0);
    }

    for (i=0;i<n;i++) 
	{
        printf("Enter number: ");
        scanf("%d", p + i);
    }

    printf("Numbers with even indices and value of each number: ");
    for (i = 0; i < n; i++) 
	{
        if (*(p + i) % 2 == 0) 
		{
            count++;
            if (count >= 2) 
			{
                printf("%d\t", *(p + i));
            }
        }
    }

    free(p);
    return 0;
}

