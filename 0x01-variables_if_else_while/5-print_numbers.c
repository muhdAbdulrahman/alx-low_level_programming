#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int decimal = 0;

	while (decimal <= 9)
	{
		printf("%d", decimal);
		decimal++;
	}
	putchar('\n');
	return (0);
}
