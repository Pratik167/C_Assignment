#include<stdio.h>
int main()
{
	char word[100];
	int vcount=0,space=0, i=0;
	
	printf("Enter a word: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]=='a'||word[i]=='A'||
		word[i]=='e'||word[i]=='E'||
		word[i]=='i'||word[i]=='I'||
		word[i]=='o'||word[i]=='O'||
		word[i]=='u'||word[i]=='U')
		{
			vcount++;  //counts only vowels
		}
		//for space
		if(word[i]==' ') //if(word[i]==32)
		{
			space++;
		}
}
	printf("\n No of vowels is %d",vcount);
	printf("\n No of spaces is %d",space);
	return 0;
}
