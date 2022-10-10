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
	char *n_name;
	char *n_owner;

	newdog = malloc(sizeof(dog_t));
	n_name = malloc(sizeof(name));
	n_owner = malloc(sizeof(owner));

	strcpy(n_name, name);
	strcpy(n_owner, owner);

	if (newdog == NULL || n_name == NULL || n_owner == NULL)
		return (NULL);

	newdog->name = n_name;
	newdog->owner = n_owner;
	newdog->age = age;

	return (newdog);
}
