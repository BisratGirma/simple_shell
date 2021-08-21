#ifndef _MAIN_H_
#define _MAIN_H_
#define MAX_WORD 100
#define MAX_CHAR 1000

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int reader(char *line);
void executecom(char *argv[]);

#endif
