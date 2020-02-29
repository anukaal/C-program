#include <stdio.h>
#include <ctype.h>

int main() {
	char a;
	int num;
	scanf("%c",&a);
	num=("%d",a);
	if(num>64&&num<91)
	{
		printf("Capitals\n");
	}
	else if(num>96&&num<123)
	{
		printf("Small\n");
	}
	else if(num>47&&num<58)
	{
		printf("Number\n");
	}
	else if (num>=0&&num<48||num>57&&num<65||num>90&&num<97||num>122&&num<127)
	{
		printf("Special Symbol\n");
	}
	return 0;
}
