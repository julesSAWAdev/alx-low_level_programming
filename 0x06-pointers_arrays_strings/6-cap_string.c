#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: capitalized string
 */
char *cap_string(char *entry)
{
	int index, count,conv;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conv = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'index' && entry[index] <= 'z')
		{
			entry[index] =  entry[index] - conv;
		}
		conv = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				conv = 32;
				break;
			}
		}
	}
	return (entry);
}

