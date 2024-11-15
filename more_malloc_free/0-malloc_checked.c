#include "main.h"
/**
 * malloc_checked - allocate memory
 * @b: number of bytes
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b); /* allocate b bytes of memory */
	if (p == NULL)
	{
		exit(98); /* end the process with the value 98 */
	}
	return (p);
}
