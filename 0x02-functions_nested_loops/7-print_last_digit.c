#include "main.h"

/**
* print_last_digit - Prints the last digit
* of a number.
*
* @r: input number as an integer.
*
* Return: last digit.
*/
int print_last_digit(int r)
{
	int p;

	p = r % 10;
	if (p < 0)
	{
		_putchar(-p + 48);
		return (-p);
	}
	else
	{
		_putchar(p + 48);
		return (p);
	}
}
