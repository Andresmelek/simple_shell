#include "holberton.h"
/**
 * _strlen -  function
 * @s: The number to be checked
 *
 * Return: returns the length of a string.
 */
int _strlen(char *s)
{
	int contador = 0;

	while (s && s[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}
/**
 * freeall - free memory
 * @make_fre:  the pointer.
 * @k: where inicia.
 *
 */
void freeall(char **make_fre, int k)
{
	for (k = k; k >= 0; k--)
		free(make_fre[k]);
	free(make_fre);
}
/**
* _strcmp - function that compares two strings
* @s1: first string
* @s2: second string
* Return: Return the remains of two strings
*/
int _strcmp(char *s1, char *s2)
{
	int a, b, c, d;

	b = 0;
	a = 0;
	c = 0;
	d = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && b == 0)
	{
		if (s1[a] != s2[a])
		{
			c = s1[a];
			d = s2[a];
			b++;
		}
	a++;
	}
	if (b == 0)
	{
		c = s1[a];
		d = s2[a];
	}
	return (c - d);
}
/**
 * impenv - imp env
 *
 */
void impenv(void)
{
	int x = 0;
	char **tmp = environ;

	while (tmp[x] != NULL)
	{
		_puts(tmp[x]);
		_puts("\n");
		x++;
	}
	exit(0);
}
