#include "main.h"
#include <unistd.h>
/**
* _putchar - Write a program that prints _putchar, followed by a new line
* @c: The character to print
*
* Return: 1 (success)
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
