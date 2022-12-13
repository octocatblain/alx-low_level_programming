#include <stdio.h>

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int _putchar(char c);
	char p[] = "ALX SE";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
