#include "dog.h"
#include "../pointers_arrays_strings/2-strlen.c"
#include "../pointers_arrays_strings/9-strcpy.c"
/**
 * new_dog - create a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *cpy_name;
    char *cpy_owner;

    if (name == NULL || owner == NULL)
        return (NULL);
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return(NULL);
    cpy_name = malloc(_strlen(name) + 1);
    if (cpy_name == NULL)
    {
        free(dog);
        return (NULL);
    }
    _strcpy(cpy_name, name);
    cpy_owner = malloc(_strlen(owner) + 1);
    if (cpy_owner == NULL)
    {
        free(cpy_name);
        free(dog);
        return (NULL);
    }
    _strcpy(cpy_name, name);
    dog->name = cpy_name;
    dog->owner = cpy_owner;
    dog->age = age;
    return (dog);
}