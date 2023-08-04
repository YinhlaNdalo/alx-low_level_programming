#include "main.h"
#include <unistd.h>
/**
 * _putchar - function to  writes the character c to stdout
 * @c: The characters to print
 *
 * Return: success 1.
 * On error, -1 is returned,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
