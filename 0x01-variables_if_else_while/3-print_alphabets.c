#include <stdio.h>

/**
 * main - prints alphabet in lowercase,uppercase,then followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
