#include <stdio.h>
#include <math.h>

int ArmstrongHora(int *num);
int main() 
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (ArmstrongHora(&num))
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}
int ArmstrongHora(int *num)
{
    int ogNum=0,remainder=0,result=0,n=0;
    ogNum=*num;
    while(ogNum!=0)
	{
        ogNum=ogNum/10;
        ++n;
    }
    ogNum=*num;
    while (ogNum!=0)
	{
        remainder=ogNum%10;
        result=pow(remainder,n)+result;
        ogNum=ogNum/10;
    }
    if(result==*num)
        return 1;
    else
        return 0;
}

