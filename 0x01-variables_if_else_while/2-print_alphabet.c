#include <stdio.h>

/**
 * main -entry
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
