#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Finds the length
 * @s: character
 * Return: the length
*/
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copy string
 * @src: source
 * @dest: were you are copying to
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len1, i;

	len1 = _strlen(src);
	for (i = 0; i < len1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - Function that creates a new dog
 * @name: param1
 * @age: param2
 * @owner: param3
 * Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) + (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) + (len2  + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy((ndog->name), name);
	_strcpy((ndog->owner), owner);
	ndog->age = age;
	return (ndog);
}
