#include "main.h"
#include <string.h>

#define SPACE (char)32
#define TAB (char)9

void init_memory(char *, char *str, int i, int j, int len, int offset, int k);

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

	if (str == NULL || strlen(str) <= 0 || (strlen(str) == 1 && *str == SPACE))
		return (NULL);

	count = count_words(str);

	if (count <= 0)
		return (NULL);

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
	char bc, c, afc;

	i = k = j = len = m = 0;
	while (*(str + j) != '\0')
	{
		c = *(str + j);
		afc = *(str + j + 1);
		bc = *(str + j - 1);

		if (c != SPACE && afc != SPACE)
			len++;
		else if (c != SPACE && bc == SPACE && afc == SPACE)
			len++;
		else
		{
			if (len > 0)
			{
				sp_word[m] = (char *) malloc(len + 2 * sizeof(char));
				init_memory(sp_word[m], str, i, j, len, 0, k);
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
				sp_word[m] = (char *) malloc(len + 2 * sizeof(char));
				init_memory(sp_word[m], str, i, j, len, 1, k);
				len = 0;
			}
		}
		j++;
	}
	return (sp_word);
}

/**
* init_memory - initialize a memory location with a value.
*
* @sp_word: address of an array.
*
* @str: string pointer.
* @i: integer value.
* @j: integer value.
* @len: integer value.
* @offset: integer value.
* @k: integer value.
*
*/

void init_memory(char *sp_word, char *str, int i, int j, int len, int offset, int k)
{

	for (i = (j - len) + offset; i <= j; i++)
	{
		*(sp_word + k) = *(str + i);
		k++;
	}
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
		if (*(s + i) == SPACE && i == 0)
		{
			i++;
			continue;
		}

		if (*(s + i) == SPACE && (*(s + i + 1) == '\0'))
		{
			i++;
			continue;
		}

		if (*(s + i) == SPACE && *(s + i + 1) != SPACE)
		{
			if (*(s + i + 1) != '\0')
				count++;
		}
		i++;
	}

	return (count);
}
