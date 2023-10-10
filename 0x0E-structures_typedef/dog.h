#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structer for the information of a dog
 * @name: the name of the dog
 * @age: its age
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
