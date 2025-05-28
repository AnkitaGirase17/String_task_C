// Take the string from user and print the counnt of vowels in it

#include<stdio.h>

int main()
{
	char str[200];
	
	int i;
	int count=0;
	printf("Enter the string :");
	gets(str);
	
	
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='A'||
		str[i]=='e'||str[i]=='E'||
		str[i]=='i'||str[i]=='I'||
		str[i]=='o'||str[i]=='O'||
		str[i]=='u'||str[i]=='U')
		{
			count++;
		}
		i++;
		
	}
	printf("The count of vowel in string is %d",count);
	
}
