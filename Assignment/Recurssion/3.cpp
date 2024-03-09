#include<stdio.h>
int power(int,int);
int main()
{
	int base,p,result;
	printf("Enter Base: ");
	scanf("%d",&base);
	printf("Enter Power: ");
	scanf("%d",&p);
	printf("%d^%d=%d",base,p,power(base,p));
	return 0;
}
int power(int base,int p)
{
	if(p!=0)
	return(base*power(base,p-1));
	else
	return 1;
}
