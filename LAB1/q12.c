#include <stdio.h>
#define HOUR 3600
#define MIN 60
int main()
{
	int sec;
	scanf("%d",&sec);
	printf("hours:%d\n",sec/HOUR);
	printf("minutes:%d\n",sec/MIN);
	return 0;
}
