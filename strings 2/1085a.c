#include<stdio.h>
#include<string.h>
int main()
{
	char t[50],s[50];
	scanf("%s",t);
	int l=strlen(t),k=l/2,j=0;
	if(l%2==0)
	{
		k=l/2-1;
	}
	for(int i=0;i<l;i++)
	{
		s[i]=t[k];
		j++;
		if(i%2==0)
		{
			k=k+j;
		}
		else
		{
			k=k-j;
		}
	}
	for(int i=0;i<l;i++)
	{
		printf("%c",s[i]);
	}
}