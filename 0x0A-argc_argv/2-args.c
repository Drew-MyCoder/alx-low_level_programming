#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * return: 0 - Always success
 */
int main(int argc, char *argv[])
{
	/* argument */
	int c;
	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
