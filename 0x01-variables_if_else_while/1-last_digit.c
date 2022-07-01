#includei <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * and print whether the number stored in the variable n.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(" last digit of %d is ", n)
	if (n > 5)
	{
		printf("greater than 5");
	}

	if (n == 0)
	{
		printf(" 0 ");
	}

	if (n < 6 && n != 0)
	{
		printf("less than 6 and not 0 ");
	}
	printf("\n");

	return (0);
}


