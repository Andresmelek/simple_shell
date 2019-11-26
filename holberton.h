#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
extern char **environ;
int error_counter;
void loop(void);
void theexecv(char **, char *, int);
int _get_pad(char **);
void execucion(char *);
int _strlen(char *s);
void elstrtok(char **, char *);
void freeall(char **, int);
void handle_sigint(int);
int _strcmp(char *, char *);
void impenv(void);
int _putchar(char c);
void _puts(char *str);
int _getstatus(char *);
int _atoi(char *);
void move_space(char *);
void hand_error(int, char **);
int error_print(char);
char *_strdup(char *);
#endif
