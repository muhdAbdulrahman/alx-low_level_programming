#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i < 8)
	{
		j = i;
		while (j < 9)
		{
			k = j;
			while (k < 10)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i != 7) || (j != 8) || (k != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
