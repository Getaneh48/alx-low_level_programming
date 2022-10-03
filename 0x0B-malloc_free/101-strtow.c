#include "main.h"
#include <string.h>

int count_words(char *s);
char **split_word(char *str, char **sp_word);

/**
* strtow - splits a string into words.
*
* @str: address of a string.
*
* Return: address of the splited words.
*
*/

char **strtow(char *str)
{
	int count;
	char **sp_word;

	count = 0;

	if (str == NULL || strlen(str) <= 0)
		return (NULL);

	count = count_words(str);

	sp_word = (char **) malloc((count + 2) * sizeof(char *));
	sp_word = split_word(str, sp_word);

	return (sp_word);
}

/**
* split_word - split words from a string and assign it to
* a new memory location.
*
* @str: string to be splitted.
* @sp_word: address of the splitted words.
*
* Return: address of the splitted words.
*
*/

char **split_word(char *str, char **sp_word)
{
	int i, k, j, len, m;

	i = k = j = len = m = 0;

	while (*(str + j) != '\0')
	{
		if (*(str + j) != (char) 32 && *(str + j + 1) != (char) 32)
			len++;
		else
		{
			if (len > 0)
			{
				sp_word[m] = (char *) malloc(len + 2 * sizeof(char));
				for (i = j - len; i <= j; i++)
				{
					*(*(sp_word + m) + k) = *(str + i);
					k++;
				}
				len = 0;
				k = 0;
				m++;
			}
		}
		if (*(str + j + 1) == '\0')
		{
			if (len > 0)
			{
				k = 0;
				m++;
				sp_word[m] = (char *) malloc(len + 2 * sizeof(char));
				for (i = j - len; i <= j; i++)
				{
					*(*(sp_word + m) + k) = *(str + i);
					k++;
				}
				len = 0;
			}
		}
		j++;
	}
	sp_word[++m] = NULL;
	return (sp_word);
}

/**
* count_words - count the number of words in a string.
*
* @s: string to be counted.
*
* Return: count of the words.
*
*/

int count_words(char *s)
{
	int count = 0, i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char) 32 && *(s + i + 1) != (char) 32)
		{
			count++;
		}
		i++;
	}

	return (count);
}
