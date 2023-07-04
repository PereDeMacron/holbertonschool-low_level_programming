#include <stdio.h>
#include <stdlib.h>

/**
 * Calculates the minimum of coin require to make change for a given amount.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings containing the command-line arguments.
 *             The second argument should be the amount in cents.
 * @return Returns 0 on successful execution, 1 if there is an error.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;

		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}

		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}

		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}

		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}

		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
