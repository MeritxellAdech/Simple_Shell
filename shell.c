#include "simple_shell.h"

/**
 * main - entry point
 *
 * @argc: the number of arguments
 * @argv: the value of each argument
 * Return: 0 success or -1 fail
 */
int main(int argc, char *argv[]) {
    size_t cmd_chars;
    (void)argc;
    char *buffer = NULL;
    char *tok;

	signal(SIGINT, sig_handler);
    while (1) 
    {
        /*Display the prompt for the user to pass data */
        if (_accept(&buffer, &cmd_chars) == -1) 
        {
            /* Accept data and execute the command*/
            return (-1);
        }
        tok = _strtok(buffer, " \n");
        // printf("Tok is: %s\n", tok);
        _exec(tok);
    }

    /* Success*/
    return (0);
}
