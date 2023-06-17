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
		if (first == 'a' + 4)
		{
			first++;
		} else if (first == 'a' +  16)
		{
			first++;
		} else
		{
			putchar(first);
			first++;
		}
	}
	putchar('\n');
	return (0);
}
