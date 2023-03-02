#include "main.h"

/**
 * _strcat - Concatenates two strings using as most
 *
 * an inputted number of bytes fron src.
 * @dest: The string to be appended upon.
 * @dest: The string to be appended to dest.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
