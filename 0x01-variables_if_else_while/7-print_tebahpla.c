#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char first = 'a', last = 'z';

	while (first <= last)
	{
		putchar(last);
		last--;
	}
	putchar('\n');
	return (0);
}
