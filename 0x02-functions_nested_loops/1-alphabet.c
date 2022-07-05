#include "main.h"

/**
*print_alphabet - print alphabet lowercase,followed by new line
*Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}

	_putchar('\n');

}

