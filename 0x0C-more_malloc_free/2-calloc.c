#include "main.h"

<<<<<<< HEAD
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;

return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
	return (NULL);
m = malloc(sizeof(int) * nmemb);

if (m == 0)
	return (NULL);

_memset(m, 0, nmemb * sizeof(int));

return (m);
}
=======


/**

 * *_memset - fills memory with a constant byte.

 * @s: pointer to put the constant

 * @b: constant

 * @n: max bytes to use

 * Return: s

 */



char *_memset(char *s, char b, unsigned int n)

{

char *ptr = s;



while (n--)

        *s++ = b;



return (ptr);

}



/**

 * *_calloc - allocates memory for an array, using malloc

 * @nmemb: array length

 * @size: size of each element

 * Return: pointer

 */



void *_calloc(unsigned int nmemb, unsigned int size)

{

void *m;



if (size == 0 || nmemb == 0)

        return (NULL);

m = malloc(sizeof(int) * nmemb);



if (m == 0)

        return (NULL);



_memset(m, 0, nmemb * sizeof(int));



return (m);

}


>>>>>>> 76c769141808f088f7aadaecb487201212f42daf
