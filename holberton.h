#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
/*Functions Prototyes */
void loop(void);
void theexecv(char **, char *, int);
int _get_pad(char **);
void execucion(char *);
int _strlen(char *s);
void elstrtok(char **, char *);
void freeall(char **, int);
void handle_sigint(int);
int compare_exit(char *);
void impenv(void);
int _putchar(char c);
void _puts(char *str);
int _getstatus(char *);
int _atoi(char *);
void move_space(char *);
void hand_error(int, char **);
int error_print(char);
int _strcmp(char *, char *);
char *duplicated(char *);
void _helper(void);

/* Global variables */
extern char **environ;
int error_counter;
#endif
