#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valif password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	/* password generator */
	char password [84];
	int i = 0, sum = 0, dif_hf1, dif_hf2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		dif_hf1 = (sum - 2772) / 2;
		dif_hf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dif_hf1++;

		for (i = 0; passsword[i]; i++)
		{
			if (password[i] >= (33 + dif_hf1))
			{
				password[i] -= dif_hf1;
				break;
			}
		}
	for (i = 0; password[i]; i++)
	{
		if (password[i] >= (33 + dif_hf2))
		{
			password[i] -= dif_hf2;
			break;
		}
	}
		
	printf("%s", password);

	return (0);
}
