#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	/* new dog */
	dog_t *n_dog;
	int c, lname, lowner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	n_dog->name = malloc(lname + 1);
	n_dog->owner = malloc(lowner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (c = 0; c < lname; c++)
	       n_dog->name[c] = name[c];
	n_dog->name[c] = '\0';

	n_dog->age = age;

	for (c = 0; c < lowner; c++)
		n_dog->owner[c] = owner[c];
	n_dog->owner[c] = '\0';

	return (n_dog);
}

