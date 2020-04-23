#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,c=0,length;
	char str[50];
	printf("Enter the string\n");
	gets(str);
	length=strlen(str);
	for(int i=0;i<length;i++)
	{
		if(str[i]!='0')
		{
			c=++count;
		}
		else
		{
			c=count;
			if(c!=0)printf("%d\t",c);
			count=0;
		}
	}
	if(str[length-1]=='1') printf("%d\t",c);
	return 0;
}
