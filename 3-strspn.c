#include "shell.h"
#include <stdio.h>

/**
 *_strchr - finds a value within a string
 *@s: this is the string to loop over
 *@c: this is the value to find
 *Return: address of the first match
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *array;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			array[i] = s[i + 1];

	}
	return (NULL);
}
