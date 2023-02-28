#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
