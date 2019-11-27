#include "holberton.h"

/**
 * loop - the function where the fork exist
 *
*/
void loop(void)
{
	int t = 0;
	size_t size = 0;
	char *string = NULL, *copy = NULL;

		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		signal(SIGINT, handle_sigint);
		while (getline(&string, &size, stdin) != EOF)
		{
			copy = string;
			t = 1;
			error_counter++;
			signal(SIGINT, handle_sigint);
			if ((string[0] == 9) || (string[0] == ' ') || (string[0] =='#'))
				string = strtok(string, "\t\r\n\a ");
			if (compare_exit(string) == 4)
				exit(_getstatus(string));
			if (_strcmp(string, "\n") == 0)
				string = strtok(string, "\n");
			execucion(string);
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "$ ", 2), t = 0;
			free(copy);
			string = NULL;
		}
		if (t == 0)
			_puts("\n");

}
/**
 * handle_sigint - ctrl + c implementacion
 * @i: status.
 *
 */
void handle_sigint(int i)
{
	i = i;
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);
}

/**
 * _getstatus - get status where command is exit
 * @string: where gets to number of status
 * Return: the status in number
 */
int _getstatus(char *string)
{
	int i = 0, x = 0;
	char aux[10] = "0";

	while (string[i] != ' ' && string[i] != '\0')
		i++;
	while (string[i] == ' ')
		i++;
	while (string[i] != '\0' && string[i] != '\n')
	{
		aux[x] = string[i];
		i++;
		x++;
	}
	i = 0;
	i = _atoi(aux);
	free(string);
	return (i);
}
