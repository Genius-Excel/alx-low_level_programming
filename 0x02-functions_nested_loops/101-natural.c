#include <stdio.h>

/**
* main - this is the main fucntion
* Return:always 0
*/

int main(void)
{
	int sum, num;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d \n", sum);
	return (0);
}
