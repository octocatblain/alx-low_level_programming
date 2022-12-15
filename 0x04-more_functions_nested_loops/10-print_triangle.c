#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: takes in an integer for the triangle's size
 */
void print_triangle(int size)
{
	int row, column, t;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (t = row + column; t >= 1; t--)
			_putchar('#');
		_putchar('\n');
	}
}
