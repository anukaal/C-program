#include <stdio.h>
#define HOUR 3600
#define 60
int main()
{
	float sec;
	float hrs,mins;
	scanf("%f",&sec);
	hrs=sec/HOUR;
	mins=sec/MIN;
	printf("hours:%.2f\n",hrs);
	printf("minutes:%.2f\n",mins);
	return 0;
}
