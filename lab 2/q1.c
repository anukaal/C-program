#include <stdio.h>
int main()
{
	int age;
	printf("Enter the age of person");
	scanf("%d" ,&age);
	if (age>18)
		printf("You can vote\n");
	else
		printf("You are not eligible to vote");
	return 0;
	
}
	
