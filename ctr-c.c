#include "simple_shell.h"

/**
 * sig_handler - Handles signal passed on the shell
 * 
 * @sig: Type of signal passed
 *
 * Return: EXIT_SUCCESS if successful
 * else EXIT_FAILURE
 */

void sig_handler(int sig)
{
	if (sig == SIGINT)
	{
		write(1, "\n$ ", 3);
	}
	if (signal(SIGINT, sig_handler) == SIG_ERR)
	{
		exit(EXIT_FAILURE);
	}
}
