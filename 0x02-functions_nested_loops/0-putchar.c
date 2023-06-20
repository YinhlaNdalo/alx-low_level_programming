#include "main.h"
#include <unstd.h>
/**
 * _putchar - Write a program that prints _putchar
 *
 * Return: 1(success)
 * Error , -1
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
