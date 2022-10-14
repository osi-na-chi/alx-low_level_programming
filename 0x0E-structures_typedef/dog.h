#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - making a dog
 *@name: name
 *@age: dog age
 *@owner: parent of the dog
 *Description: has all attribute in a box
 */

struct dog
{
char *name;
float age;
char *owner
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */

