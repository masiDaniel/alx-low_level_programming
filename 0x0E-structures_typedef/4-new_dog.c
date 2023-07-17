#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - create a new dog
 * @name: of dog
 * @age: of dog
 * @owner: of the dog
 *
 * Return: new dog when succesful, NULL when not
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int length1, length2;
length1 = _strlen(name);
length2 = _strlen(owner);


newdog = malloc(sizeof(dog_t));

if (newdog == NULL)
return (NULL);

newdog->name = malloc(sizeof(char) * (length1 + 1));
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}

newdog->owner = malloc(sizeof(char) * (length2 + 1));

if (newdog->owner == NULL)
{

free(newdog);
free(newdog->name);
return (NULL);

}

_strcpy(newdog->owner, owner);
_strcpy(newdog->name, name);
newdog->age = age;
return (newdog);
}

/**
 * _strcpy - copy string1 to string2
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;
while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
 * _strlen - length of string
 * @s: string to be checked
 * Return: length
 */

int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}
