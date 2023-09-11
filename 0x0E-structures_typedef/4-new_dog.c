#include "dog.h"
#include <stdio.h>
/**
 *new_dog - creates a new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return NULL;
}

newDog->name = strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return NULL;
}

newDog->owner = strdup(owner);
if (newDog->owner == NULL) 
{
free(newDog->name);
free(newDog);
return NULL;
}

newDog->age = age;
return newDog;
}
