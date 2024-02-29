#include "simple_shell.h"
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: the number of arguments
 * @argv: the value of each argument
 * Return: 0 success or -1 fail
 */
int main(int argc, char *argv[])
{
	char *buffer = NULL;
	char *tok;
	size_t cmd_chars;
	(void)argc;
	(void) argv;

	while (1)
	{
		/*Display the prompt for the user to pass data */
		if (_accept(&buffer, &cmd_chars) == -1)
		{
			/* Accept data and execute the command*/
			return (-1);
		}
		tok = strtok(buffer, " \n");
		_exec(tok);
	}
	/* Success*/
	return (0);
}
