#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - finds the length of a string
 * @str:the length to be measured
 * Return:length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string pointed to by src including
 *           terminating null byte to a buffer pointed
 *           to by dest
 * @dest:the buffer storing the string copy
 * @src:the source string
 *
 * Return:the pointer to dest
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
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 *
 * Return:the struct dog
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
	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);
	return (doggo);
}
