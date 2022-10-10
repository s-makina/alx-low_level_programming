#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initialize a variable of type struct dog
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: Salvation\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (Salvation)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
