#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
*_strlen - returns the length of a string
*@s: string to evaluate
*Return: the length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
*including the terminating null byte (\0)
*to the buffer pointed to by dest
*@dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * new_dog - creates a new dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
