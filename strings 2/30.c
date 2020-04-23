#include<stdio.h>
int main()
{
	char s[16];
	scanf("%s",s);
	int k=((s[14]-48)*10)+(s[15]-48);
	printf("%d",k%5);
}
