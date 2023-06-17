#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0;

	while (i < 10)
	{
		j = i;
		while (j < 10)
		{
			k = j;
			while (k < 0)
			{
				if (i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i != 8) || (j != 9) || (k != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
