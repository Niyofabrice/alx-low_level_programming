#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that describes the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog dog_t - typedef for struct dog
 */

typedef struct dog dog_t;


void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
