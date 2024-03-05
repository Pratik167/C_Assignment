#include <stdio.h>

int main() 
{
    char word1[100], word2[100], combinedstr[200];
    int len1 = 0, len2 = 0, i, j;

    printf("Enter the first string: ");
    gets(word1);
    printf("Enter the second string: ");
    gets(word2);

    while (word1[len1] != '\0')
	 {
        len1++;
    }
    while (word2[len2] != '\0')
	{
        len2++;
    }
    for (i=0;i<len1;i++) 
	{
        combinedstr[i] = word1[i];
    }
    combinedstr[len1] = ' ';
    for (j=0;j<len2;j++) 
	{
        combinedstr[len1 + 1 + j] = word2[j];
    }
    combinedstr[len1 + 1 + len2] = '\0';

    printf("Concatenated string: %s\n", combinedstr);
    return 0;
}
