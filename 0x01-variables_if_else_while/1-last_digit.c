#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this is the main function
* Return:always 0
*
*/
int main(void)
{
	int n, last_int;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_int = abs(n) % 10;
	if (last_int > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_int);
	}
	else if (last_int == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_int);
	}
	else if (last_int < 6 && last_int != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_int);
	}
	return (0);
}
