#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner);
{
    char **cpy_name;
    char **cpy_owner;

    cpy_name = new_dog->name;
    cpy_owner = new_dog->owner;

    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    dog_t *new_dog = {new_dog->name, new_dog->age, new_dog->owner};
}