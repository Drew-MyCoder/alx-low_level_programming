#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - Always success
 */
int main(int argc, char *argv[])
{
	/* add positive number */
	int c, d, add = 0;

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (!isdigit(argv[c][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[c]);
	}
	printf("%d\n", add);
	return (0);
}
