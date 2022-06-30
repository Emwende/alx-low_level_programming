#include <stdio.h>

/**
*main-entry point
*
*Return:Always 0 (success)
*/
int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (Unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (Unsigned long)sizeof(a));
        printf("Size of a long int: %lu bytes(s)\n", (Unsigned long)sizeof(b));
        printf("Size of a long long int: %lu bytes(s)\n", (Unsigned long)sizeof(c));
        printf("Size of a float: %lu bytes(s)\n", (Unsigned long)sizeof(f));	
	return (0)
}
