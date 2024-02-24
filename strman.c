#include "simple_shell.h"

/**
 * _strlen - counts the number of characters in a string
 *
 * @str: the string to count
 * Return: the number of characters in the string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (NULL);
	/*count the number of characters*/
	while (*str)
	{
		/*increase count by one*/
		i++;
	}
	/*return counted chars*/
	return (i);
}

/**
 * _strcpy - copies a string
 *
 * @dest: the destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*check if dest or src are null*/
	if (dest == NULL || src == NULL)
		return (NULL);

	/*copy the src string into the dest*/
	while (src[i])
	{
		/*Copy a character from src to dest*/
		dest[i] = src[i];
		/*increment i*/
		i++;
	}
	/*add the null character at the end of the dest string*/
	dest[i] = '\0';

	/*Return dest*/
	return (dest);
}


/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if @s1 and @s2 are equal
 * a negative value if @s1 < @s2
 * a positve value if @s1 > @s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/*compare the characters of the strings*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/*If characters are unequal, return the difference*/
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		/*increment counter*/
		i++;
	}
	/*return 0*/
	return (0);
}
