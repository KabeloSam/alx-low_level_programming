#include "main.h"
/**
 *malloc_checked- allocates memory
 *@b: argument
 *Return:pointer to allocated memory or exit
 */

void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);

	if (alloc_mem == NULL)
	{

		exit(98);
	}
	return (alloc_mem);
}
