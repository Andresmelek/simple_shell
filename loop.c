#include "holberton.h"

/**
 * loop - the function where the fork exist
 *
*/
void loop(void)
{
	int i = 0;
	size_t size = 0;
	char *string;
	pid_t chil;

		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		signal(SIGINT, handle_sigint);
		while (getline(&string, &size, stdin) != EOF)
		{
			error_counter++;
			signal(SIGINT, handle_sigint);
			if (string[0] == 9 || string[0] == ' ')
				string = strtok(string, "\t   ");
			if (compare_exit(string) == 4)
				exit(_getstatus(string));
			if (_strcmp(string, "\n") == 0)
				string = strtok(string, "\n");
			chil = fork();
			if (chil == 0)
			execucion(string);
			else if (chil < 0)
				perror("hsh"), exit(0);
			else
			{
				wait(&i);
			}
			write(STDOUT_FILENO, "$ ", 2);
		}
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
	char aux[10];

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
	return (i);
}