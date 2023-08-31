#include "main.h"

/**
 * print_binary - function to prints the binary of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int y, count = 0;
	unsigned long int current;

	for (y = 23; y >= 0; y--)
	{
		current = n >> y;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
