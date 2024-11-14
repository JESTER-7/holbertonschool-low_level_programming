#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

typedef struct dog
{
    char *name;
    char *owner;
    float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
