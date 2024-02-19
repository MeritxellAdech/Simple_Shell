#ifndef __simpleshell__H__
#define __simpleshell__H__

/*Headers*/
#include <stdio.h>
#include <unistd.h>

/*Macros*/
#define I_MODE = 1
#define NON_I_MODE = 0
#define ERR_OCCURED = -1


/*Structs*/



/*Function prototypes*/
int _accept(char **buffer, size_t *bytes_read);
int check_mode(void);






#endif

