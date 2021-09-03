# Simple Shell


## List of used functions and system calls
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* signal (man 2 signal)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* write (man 2 write)

## Compilation
The shell program can be compiled this way:
` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh `

## Testing
**This shell can work like this in interactive mode:**

$ ./hsh

($) /bin/ls

hsh main.c shell.c

($)

($) exit

$

**But also in non-interactive mode:**

$ echo "/bin/ls" | ./hsh

hsh main.c shell.c test_ls_2

$

$ cat test_ls_2

/bin/ls

/bin/ls

$

$ cat test_ls_2 | ./hsh

hsh main.c shell.c test_ls_2

hsh main.c shell.c test_ls_2

$
Some errors with this program hsh:

$ echo "qwerty" | ./hsh

./hsh: 1: qwerty: not found

$ echo "qwerty" | ./././hsh

./././hsh: 1: qwerty: not found
$


I wanted to avoid, special IO for terminals.

> Ken Thompson
