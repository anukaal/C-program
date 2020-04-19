#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],c;
	printf("Enter the string\n");

	gets(str);
	if(strlen(str)%2==0)
	{
		for(int i=0;i<strlen(str);i+=2)
		{
			c=str[i];
			str[i]=str[i+1];
			str[i+1]=c;
		}
		printf("%s",str);
	}
	else printf("N/A as the lenth is odd");
	return 0;
}
