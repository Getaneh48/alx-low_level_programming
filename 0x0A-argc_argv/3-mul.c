#include "main.h"

/**
* main - multiplies two numbers.
* @argc: number of arguments.
* @argv: collection of arguments.
*
* Return: 0 success 1 for failor.
*
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
