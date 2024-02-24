#include "simple_shell.h"

/**
 * free_str - free a string and sets it to NULL
 *
 * @str: string to free
 */
void free_str(char *str)
{
	free(str);
	str = NULL;
}

/**
 * free_array - frees an array of strings and sets it to NULL
 *
 * @str_arr: array of string to free
 */
void free_array(char **str_arr)
{
	int i = 0;

	/*check if the array is empty*/
	if (str_arr == NULL)
		return;

	/*free each string in the array*/
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
	}
	/*free the array itself*/
	free(str_arr);
	/*set array to NULL*/
	str_arr = NULL;
}
