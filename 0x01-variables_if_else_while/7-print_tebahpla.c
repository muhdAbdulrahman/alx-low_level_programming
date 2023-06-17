#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char first = 'a', last = 'z';

	while (last <= first)
	{
		putchar(last);
		last--;
	}
	putchar('\n');
	return (0);
}
