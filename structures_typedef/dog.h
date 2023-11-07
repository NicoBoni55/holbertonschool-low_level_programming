#ifndef STRUCTS
#define STRUCTS

/**
 *struct dog - define a new type of structure
 *@name : define the name
 *@age : define the age
 *@owner : define the owner
 *
 *return : 0.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
