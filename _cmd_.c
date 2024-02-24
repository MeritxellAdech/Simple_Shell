#include "simple_shell.h"

/**
 * _exec - executes the given command
 *
 * @command: the given command to be executed
 * Return: 0 sucess or -1 if fails
 */
int _exec(char *command)
{
	int status;
	pid_t pid;
	int path_status = VALID_CMD;
	char *args[] = {command, NULL};

	/*Verify that pathname is valid*/
	path_status = check_file(command);
	if (path_status == VALID_CMD)
	{
		/*Create a process*/
		pid = fork();
		/*Check if any error occured*/
		if (pid == ERR_OCCURED)
			return (ERR_OCCURED);
		if (pid == 0)
		{
			if (execve(command, args, NULL) == ERR_OCCURED)
				exit(EXIT_FAILURE);
		}
		else
			wait(&status);
	}
	return (status);
}
