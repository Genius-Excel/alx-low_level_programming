#include <stdio.h>

/**
* main - this is the main fucntion
* Return:always 0
*/

int main(void)
{
	int num, mul3, mul5, sum;

	mul3 = mul5 = sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0)
		{
			mul3 += num;
		}
		else if (num % 5 == 0)
		{
			mul5 += num;
		}
	}
	sum = mul3 + mul5;

	printf("%d \n", sum);
	return (0);
}
