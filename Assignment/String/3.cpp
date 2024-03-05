#include<stdio.h>

int main() {
    char a[10], b[10];
    int i = 0, count1 = 0, count2 = 0, flag = 0;

    ent:
    printf("Enter the first word: ");
    gets(a);
    printf("Enter the second word: ");
    gets(b);
    //yo chai changing the whole string into small letters if Capital and also counting the amount of letters

    for (i=0;a[i] !='\0'; i++) //for 1st word
	{
        count1++;
        if (a[i] >=65&& a[i] <=90) 
		{
            a[i] = a[i] + 32;
        }
    }

    for (i = 0; b[i] != '\0'; i++) //same thing for 2nd word
	{
        count2++;
        if (b[i] >= 65 && b[i] <= 90) 
		{
            b[i] = b[i] + 32;
        }
    }
    //this portion of code is activated only when the amount of letter of 1st and 2nd word is same

    if (count1 == count2) 
	{
        for (i=0;i<count1;i++) 
		{
            if (a[i] != b[i]) 
			{
                flag=2;
                break;//this sends the compiler to the if flagg wala part when a ko element is not same as b ko
            }
        }
    } 
	else //this activates when the amount of letter is different 
	{
        printf("Not the same word length\n");
        goto ent;// sends the user to the input lineee part ma
    }

    if (flag == 0) //here
	{
        printf("\nSame words");
    } 
	else 
	{
        printf("Not the same words");
    }

    return 0;
}
