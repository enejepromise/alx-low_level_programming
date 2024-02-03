#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Random number that prints negative and postive number
 * Return - 0
 */
int main(void)
{
	int n = rand();

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	else if(n < 0)
	{
		printf("is negative\n");
	}

	
	return (0);
}
