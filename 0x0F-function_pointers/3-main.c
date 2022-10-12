#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* main - entry point of the program.
*
* @argc: number of arguments.
* @argv: lists of arguments.
*
* Return: 0 on success 1 on failure.
*
*/

int main(int argc, char *argv[])
{
	int x, y, result;
	char *opr;
	int (*f)(int, int);

	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		opr = argv[2];

		if ((strcmp(opr, "/") == 0 || strcmp(opr, "%") == 0) && y == 0)
		{
			printf("Error\n");
			exit(100);
		}

		f = get_op_func(opr);
		if (!f)
		{
			printf("Error\n");
			exit(99);
		}

		result = f(x, y);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
