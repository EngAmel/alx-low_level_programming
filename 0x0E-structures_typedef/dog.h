#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct dog
 * @name:name
 * @age:age
 * @owner:owner
 *
 * Description: dog struct easly reuse
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
