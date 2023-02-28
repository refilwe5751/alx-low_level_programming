#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: a pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int length_of_the_string = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		length_of_the_string = length / 2;
	}

	else
	{
		length_of_the_string = (length - 1) / 2;
	{

	for (i = length_of_the_string; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
