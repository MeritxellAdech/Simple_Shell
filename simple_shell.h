#ifndef __simpleshell__H__
#define __simpleshell__H__

/*Headers*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>





/*Macros*/
#define I_MODE 1
#define NON_I_MODE 0
#define ERR_OCCURED -1


#define VALID_CMD 0
#define INVALID_CMD 89
#define IS_EXEC 1
#define IS_NOT_EXEC 90



/*Structs*/



/*Function prototypes*/
int _accept(char **buffer, size_t *bytes_read);
int check_mode(void);

int check_file(char *path);
int _putchar(char c);

#endif

