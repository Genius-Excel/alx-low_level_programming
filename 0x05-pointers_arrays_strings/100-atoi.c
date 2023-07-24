#include "main.h"

/**
 * _atoi - this is converts string to integer
 * @s: string to be converted
 * Return: number
 */

int _atoi(char *s)
{
	int outcome = 0;

	int sign = 1;

	while ((*s == ' ' || *s == '\t') || (*s == '\n' || *s == '\r') \
			(*s == '\f' || *s == '\v') || (*s == '-' || *s == '+'))
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		s++;
	}

	while (*s >= '0' && *s <= 9)
	{
		if (outcome > (INT_MAX - (*s - '0') / 10))
		{
			outcome = sign == 1 ? INT_MAX : MIN_MAX;
			return (outcome);
		}

		outcome = outcome * 10 + (*s - '0');
		s++;
	}

	return (sign * outcome);

}
