#include <stdio.h>
int factorial(int);
int main()
{
	int result=0,n=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	result=factorial(n);
	printf("factorial = %d",result);
	return 0;
}
int factorial(int n)
{
	if (n==0)
	return 1;
	else
	return n*factorial(n-1);
}
