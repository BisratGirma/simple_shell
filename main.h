#ifndef _MAIN_H_
#define _MAIN_H_
#define MAX_WORD 100
#define MAX_CHAR 1000

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <fcntl.h>

int reader(int count, char *native_av[],
	       	char *env[], char *pathlist[]);

void executecom(char *argv[], int free,
	       	char *path[], char *dir);

char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int commands(char *argv, char *pathlist[]);
int checkenv(char *arg, char *env[]);
char **getpathlist();

#endif
