#include <stdio.h>
#include <stdlib.h>
/**
*main - Write a program that prints all possible
*different combinations of two digits
*Return: Always 0 (success)
*/
int main(void)
{
	int c;
	int d;
	int e;
	int f = 0;

	while (f < 10)
	{
		e = 0;
		while (e < 10)
		{
			d = 0;
			while (d < 10)
			{
				c = 0;
				while (c < 10)
			{
				if (!(f == c && e == d))
				{
					putchar('0' + f);
					putchar('0' + e);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
					if (!(f + e == 18 && c + d == 17 && d == 9))
					{
						putchar(',');
						putchar('');
					}
				}
				c++;
			}
			d++;
			}
			e++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}

										

