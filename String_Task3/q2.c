#include<stdio.h>
void strcon(char *str1,char *str2,char *str3)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		str3[j++]=str1[i++];
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j++]=str2[i++];
	}
	str3[j]='\0';
}
void replace(char str[],char rep[],char sub[],int index)
{
	int len;
	for(len=0;sub[len]!='\0';len++){}
	char temp[30];
	strcon(temp,str,temp);
	str[index]='\0';
	strcon(str,rep,str);
	strcon(str,temp+index+len,str);
}

int search(char str[],char sub[])
{
	int i=0,j=0,l;
	for(l=0;sub[l]!='\0';l++)
	while(sub[j]!='\0'&& str[i]!='\0')
	{
		if(str[i]==sub[j])
		{
			j++;
		}
		else j=0;
		i++;
	}
	if(j==l) return (i-j);
	else return -1;
}
int main()
{
	int index;
	char str[30],sub[30],rep[30];
	scanf("%[^\n]%*c",str);
	scanf("%[^\n]%*c",sub);
	scanf("%[^\n]%*c",rep);
	index=search(str,sub);
	if(index!=-1) 
	{
		replace(str,rep,sub,index);
	}
	
	printf("%s",str);
	return 0;
}
