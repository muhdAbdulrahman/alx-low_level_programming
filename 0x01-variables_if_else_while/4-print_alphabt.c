#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char start = 'a', stop = 'z';

	while (start <= stop)
	{
		if (start != 'e')
		{
			start++;
		} else if (start != 'q')
		{
			start++;
		} else
		{
			putchar(start);
			start++;
		}
	}
	putchar('\n');
	return (0);
}
