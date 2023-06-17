#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space, with each combination separated by a comma and space.
 * Numbers are printed in ascending order with two digits each.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 98) /* The maximum value for the first number is 98 */
	{
		while (j <= 99) /* The maximum value for the second number is 99 */
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

			j++;
		}

		i++;
		j = i + 1;
	}

	putchar('\n');

	return (0);
}
