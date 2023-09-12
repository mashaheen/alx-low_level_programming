#ifndef DOG_A
#define DOG_A
/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Defines dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
