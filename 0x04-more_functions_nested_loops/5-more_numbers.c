#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int num, a;

	for (num = 0; a <= 9; a++)
	{
		for (num = 0; num <= 14 ; num++)
		{
			if (num > 9)
			{
			_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
	}
}
