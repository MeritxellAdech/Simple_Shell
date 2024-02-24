#include "simple_shell.h"

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



/**
 * check_file - checks whether @path exists
 *
 * @path: is the given path
 * Return: VALID if @path exists or INVALID if it does not
 */
int check_file(char *path)
{
	struct stat file_stat;

	/* Check if path is NULL */
	if (path == NULL)
		return (-1);

	/*Check if file exists and can be accessed*/
	if (access(path, F_OK) == -1)
	{
		perror("./shell");
		return (INVALID_CMD);
	}
	/*Return success*/
	return (VALID_CMD);
}
