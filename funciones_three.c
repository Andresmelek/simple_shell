#include "holberton.h"

/**
 * compare_exit - function that returns a pointer
 * @string: string
 * Return: Returns NULL if str = NULL
 *
 */
int compare_exit(char *string)
{
	int i = 0, t = 0;
	char cmp[4] = {'e', 'x', 'i', 't'};

	while (i < 4)
	{
		if (string[i] == cmp[i])
			t++;
		i++;
	}
	return (t);
}
