 #include <stdlib.h>


<<<<<<< HEAD
/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
=======



/**

 * *malloc_checked - allocates memory using malloc and exit if failed

 * @b: int

 * Return: pointer to the array initialized or NULL

 */



void *malloc_checked(unsigned int b)

{

	int *m = malloc(b);



	if (m == 0)

		exit(98);



	return (m);

>>>>>>> 76c769141808f088f7aadaecb487201212f42daf
}
