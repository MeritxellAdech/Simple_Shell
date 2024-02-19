#include "simple_shell.h"

/**
 * _accept - displays a prompt to the user and accepts the command
 * to be executed
 *
 * @buffer: the memory address where the command would be stored
 * @bytes_read: the number of bytes written to @buffer
 *
 * Return: 0 if @buffer has a value, OEF if end of file is
 */
int _accept(char **buffer, size_t *bytes_read)
{
	int actual_read = 0;
	int mode;

	/*Check the mode of the user*/
	mode = check_mode();
	/*The interactive mode*/
	if (mode == I_MODE)
	{
		/*print to stdout*/
		write(STDOUT_FILENO, "$ ", 2);
	}
	/*non-interactive mode*/
	actual_read = getline(buffer, bytes_read, stdin);
	/*check if the getline failed*/
	if (actual_read == EOF)
	{
		/*If the mode is interactive*/
		if (mode == I_MODE)
		{
			/*Print newline to the STDOUT*/
			write(STDOUT_FILENO, "\n", 1);
		}
		return (EOF);
	}
	return (0);
}
