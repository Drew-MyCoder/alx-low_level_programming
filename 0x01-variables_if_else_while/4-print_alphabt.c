#include <stdio.h>
/**
 * main - Prints alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	for (k = 97; k < 123; k++)
	{
		if (k != 101 && k != 113){
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
