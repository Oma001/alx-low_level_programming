#include <stdio.h>
#include "main"

/**
 * _strchr _ Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			retrun (s + i);
	}

	return (NULL);
}
