#ifndef DOG_H
#define DOG_H

/**
* struct dog - new type for structure.
* @name: Name of a dog.
* @age: Age of a dog.
* @owner: Owner of a dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
