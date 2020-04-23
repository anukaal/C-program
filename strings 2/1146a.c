#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	scanf("%s",s);
	int l=strlen(s),k=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a')
		{
			k=k+1;
		}
	}
	if(k<=l/2)
	{
		printf("%d",2*k-1);
	}
	else
	{
		printf("%d",l);
	}
}