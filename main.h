#ifndef _MAIN_H_
#define _MAIN_H_
#define MAX_WORD 100
#define MAX_CHAR 1000

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int reader(int count, char *native_av[]);
void executecom(char *argv[], int count,
	       	char *native_av[], int i);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);

#endif
