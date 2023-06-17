#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int first = 0;

	while (first <= 9)
	{
		putchar(first + '0');
		first++;
	}
	putchar('\n');
	return (0);
}
