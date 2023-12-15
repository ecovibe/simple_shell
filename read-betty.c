#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int add_t = num1 + num2;

	printf("%d\n", add_t);
	return (0);
}
