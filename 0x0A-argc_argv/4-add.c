#include "main.h"

/**
* main - prints all arguments it receives.
*
* @argc: number of arguments.
* @argv: collection of arguments.
*
* Return: 0 success 1 for failor.
*
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (!check_if_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);

		i++;
	}

	printf("%d\n", sum);

	return (0);
}

/**
* check_if_number - check if a given string is a number.
*
* @num: string
*
* Return: 1 if it is a number 0 if it is not.
*
*/

int check_if_number(char *num)
{
	int isnum = 1;

	if (*num == '\0')
		return (isnum);

	if (!isdigit(*num))
		isnum = 0;
	else
		isnum = check_if_number(++num);

	return (isnum);
}
