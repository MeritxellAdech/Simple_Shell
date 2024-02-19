#include "_simple_shell.h"

/**
 * check_mode - test whether the shell is in interactive mode
 * or non-interactive mode
 *
 * Return: the mode I_MODE if the user can interact with the shell
 * or NON_I_MODE if the user cannot
 */
int check_mode(void)
{
	int mode;

	mode = isatty(STDIN_FILENO);
	if (mode == 1)
		return (I_MODE);
	return (NON_I_MODE);
}
