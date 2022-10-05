#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array that conatains the program command line argument
 * Return: 0 - always success
 */
int main(int argc, char *argv[])
{
	/* multiply */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
