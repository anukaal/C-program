#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0;
	char uniq;
	char str[50];
	printf("Enter the string\n");
	gets(str);
	for(int i=0;i<strlen(str);i++)
	{
		uniq=str[i];
		for(int j=i+1;j<strlen(str);j++)
		{
			if(str[j]==uniq)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag) printf("string does not contain unique charcters");
	else printf("string contains unique charcters");
	return 0;
}
