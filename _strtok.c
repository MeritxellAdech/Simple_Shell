#include "simple_shell.h"

/**
 * _strtok - tokenize a string by given delimiter
 *
 * @string: The string to be tokenize
 *
 * @delimiter: The given delimiter to tokenize a strin
 *
 * Return: pointer to the next string or
 * NULL if there are no more token
 *
 */

char *_strtok(char *string, char *delimiter)
{
	static char *input;
	char *result;
	int i;

	/* Initialize the input string */
	if (string != NULL)
		input = string;

	/* case for the final token  */
	if (input == NULL)
		return (NULL);

	/* Memory to store the extracted string */
	result = malloc(_strlen(input) + 1);

	/*Store the extracted string in array*/
	for (i = 0; input[i] != '\0'; i++)
	{
		/*If delimiter is not reached, then add the current character to result[i]*/
		if (input[i] != *delimiter)
			result[i] = input[i];
		/* Else store the string formed */
		else
		{
			result[i] = '\0';
			input = input + i + 1;
			return (result);
		}
	}

	/* End the loop */
	result[i] = '\0';
	input = NULL;
	/* Return the resultant pointer to the string*/
	return (result);
}
