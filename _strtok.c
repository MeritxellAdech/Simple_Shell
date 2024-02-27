#include "simple_shell.h"

/**
 * tok_count - counts the number of tokens in a string
 *
 * @str: the given string
 * @delim: delimeter used for tokenization
 * Return: the number of counted tokens from @str
 */
int tok_count(char *str, char *delim)
{
	int count = 0, len = 0;
	char *token = NULL;
	char *tmp = NULL;

	/*count the number of character in str*/
	len = _strlen(str) + 1;
	/*allocate memory for tmp*/
	tmp = malloc(sizeof(char) * len);
	/*check that the allocation worked successul*/
	if (tmp == NULL)
		return (-1);

	/*copy str to tmp to preserve the original string*/
	_strcpy(tmp, str);
	/*create the token to be able to count them*/
	token = strtok(tmp, delim);

	/*count the found tokens*/
	while (token != NULL)
	{
		count++;
		/*get the next token*/
		token = strtok(NULL, delim);
	}
	/*Free tmp since we are done using it*/
	free(tmp);

	/*return the number of found tokens*/
	return (count);
}


/**
 * _strtok - tokenize a string by given delimiter
 *
 * @str: The string to be tokenize
 *
 * @delim: The given delimiter to tokenize a strin
 *
 * Return: an array of tokens
 *
 */

char **_strtok(char *str, char *delim)
{
	char **tokens = NULL;
	char *token =  NULL;
	int len = 0, tok_len = 0, i = 0;

	/* Initialize the input string */
	if (str == NULL)
		return (NULL);

	/* count the number of characters in str*/
	len = _strlen(str) + 1;

	/* allocate memory for token*/
	token = malloc(sizeof(char) * len);
	/*handle memory allocation errors*/
	if (token == NULL)
		return (NULL);
	/* copy str to token*/
	_strcpy(token, str);
	/*count the number of tokens in str*/
	tok_len = tok_count(token, delim);
	/* allocate memory for the array of tokens to hold all the tokens*/
	tokens = malloc(sizeof(char) * (tok_len + 1));
	if (tokens == NULL)
		return (NULL);
	/* tokenize str by getting the first token*/
	token = strtok(token, delim);
	/*copy the tokens into the array*/
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		/*get the next token*/
		token = strtok(NULL, delim);
	}
	free(token);
	tokens[i] = NULL;
	return (tokens);
}
