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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}

	return (0);
}
