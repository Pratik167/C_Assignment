#include<stdio.h>
int main()
{
	int i=0,j=0,a[3][3],sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter a[%d][%d] element:",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	for (i=0;i<3;i++) 
	{
        sum=sum+a[i][i];
        sum=sum+a[i][2-i];
    }

    printf("The sum of diagonal elements is: %d\n", sum);
	return 0;
}
