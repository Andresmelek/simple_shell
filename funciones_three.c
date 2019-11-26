#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Returns NULL if str = NULL
 * returns a pointer to the duplicated string.
 * returns NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
	int i, j, len = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len += 1;

	array = malloc(sizeof(char) * len);
		if (array == NULL)
			return (NULL);

	for (j = 0; j <= len; j++)
	{
		array[j] = str[j];
	}
	return (array);
}
