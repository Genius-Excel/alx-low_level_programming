#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 != 0))
	{
		if (month > 2)
		{
			day++;
		}
	}
	if (month == 2 && day == 60)
	{
		printf("Date: %02d/%02d/%04d\n", month, day - 31, year);
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Date: %02d/%02d/%04d\n", month, day - 31, year);
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", (lp(year)) ? 365 - day : 365 - day);
	}
}

/**
* lp - checks if it's leap year
* @year: year to checked
* Return: 1 if leap year, 0 for otherwise
*/

int lp(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
