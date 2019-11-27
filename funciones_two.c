#include "holberton.h"
/**
 * _atoi - function that multiplies two integers.
 * @s: The number to be checked
 *
 * Return: res
 */
int _atoi(char *s)
{

	unsigned int res = 0;
	int n = 0, t, x, i = 0;

	if (*s == '\0')
		return (0);
	t = 0;
	x = 0;
	for (n = 0; s[n] < 48 || s[n] > 57; n++)
	{
		if (s[n] == '-')
		{
			x++;
		}
	}

	for (; s[i] != '\0' && t == 0; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';

			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				t++;
			}
		}
	}

	if ((x % 2) != 0)
	{
		res = res * -1;
	}
	return (res);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - function that prints a string, followed by a new line
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
}
/**
 * move_space - Ommits the spaces
 * @string: string that comes in
 */
void move_space(char *string)
{
	while (string[0] == ' ')
		string++;
}
