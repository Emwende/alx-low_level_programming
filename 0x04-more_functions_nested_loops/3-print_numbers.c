#include "main.h"

/**
*print_numbers - prints numbers 0 to 9, followed by a new line
*
*Return: Always 0
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
