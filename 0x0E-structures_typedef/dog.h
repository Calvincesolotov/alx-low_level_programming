#ifndef DOG
#define DOG

/**
 * struct dog - class given to the dog
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
