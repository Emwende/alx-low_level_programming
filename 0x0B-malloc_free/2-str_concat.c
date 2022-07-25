#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*str_concat - concatenates two strings.
*@s1: string to concatenate
*@s2: other string to concatenate
*
*Return: pointer to the new string created (Success), or NULL (Error)
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, q, r;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
		{
			;

		{
			if (s2 == NULL)
			{
				j = 0;
			}
			else
			{
				for (j = 0; s2[j]; ++j)
				{
					;
				}
			}
	q = i + j + 1;
	s = malloc(q * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (r = 0; r < i; ++r)
		s[r] = s1[r];
	for  (r = 0; r < j; ++r)
		s[r + i] = s2[r];
	s[i + j] = '\0';
	return (s);
}
