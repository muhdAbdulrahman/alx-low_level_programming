#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int first = 0;

	while (first < 16)
	{
		if (first < 10)
		{
			putchar(first + '0');
			first++;
		} else
		{
			putchar(first + 'a'));
			first++;
		}
	}
	putchar('\n');
	return (0);
}
