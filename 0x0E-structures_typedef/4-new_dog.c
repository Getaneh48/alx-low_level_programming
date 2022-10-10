#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - create a new dog structure.
*
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of the dog.
*
* Return: the address of the newly created dog structure.
*
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (age < 0 || name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(_strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(_strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->owner = _strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

/**
* _strcpy - copy a string from a source to a destination.
*
* @dest: destination of a string.
* @src: source of a string.
*
*/

char *_strcpy(char *dest, char *src)
{
	for (; *src != '\0'; ++src, ++dest)
		*dest = *src;

	return (dest);

}

/**
* _strlen - find the length of a string.
*
* @str: string
*
* Return: the length of the string.
*
*/

int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; ++str)
		len += 1;

	return (len);
}
