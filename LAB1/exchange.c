#include <stdio.h>
#define RATE 100
int main( )
{
	float rupees, dollars;
	printf("Enter dollars: ") ;
	scanf ("%f" , &dollars) ;
	rupees = dollars * RATE;
	printf ( "%f dollars = %f rupees. \n", dollars, rupees);
}
