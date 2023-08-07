#include "main.h"

/**
 * get_endianness - function that checks the size of a machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}