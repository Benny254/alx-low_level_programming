#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - to returns the length of a string
 * @s: the string to be evaluated
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - to copies the string pointed to by src
 * to include the terminating null byte (\0)
 * the buffer pointed to by dest
 * @dest:the pointer to the buffer in which we are to copy the string
 * @src: the string to be copied
 *
 * Return: A pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - To create a new dog
 * @name: The name of a dog
 * @age: The age of a dog
 * @owner: The owner of a dog
 *
 * Return: A pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

}
