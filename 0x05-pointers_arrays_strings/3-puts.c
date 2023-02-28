#include "main.h"

/**
 * _puts - prints a string to standard output, followed by a new line
 *
 * @str: a pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
