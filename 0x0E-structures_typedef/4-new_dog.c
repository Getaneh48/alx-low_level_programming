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

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->owner = owner;
	newdog->age = age;

	return (newdog);
}
