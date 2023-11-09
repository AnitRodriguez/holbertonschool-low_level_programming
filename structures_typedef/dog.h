#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Info
 *@name: Member number one
 *@age: Member number two
 *@owner: Member number three
 *Description: Data dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *x);
#endif
