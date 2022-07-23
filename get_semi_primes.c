#include "factors.h"
/**
 * get_semi_primes - finds two integer prime factors of a number
 * in the fastest way
 * @num: integer number
 *
 * Return: 0 if exited successfully, otherwise 1
 */
size_t get_semi_primes(size_t num)
{
	size_t i = 2, *results = malloc(sizeof(size_t) * BUFSIZ);

	if (results == NULL)
	{
		fprintf(stderr, "Malloc Error\n");
		return (EXIT_FAILURE);
	}
	for (; i <= num; i++)
	{
		if (num % i == 0)
		{
			results[0] = i;
			results[1] = num / i;
			if (num % results[1] != 0)
				continue;
			break;
		}
	}
	fprintf(stdout, "%ld=%ld*%ld\n", num, results[1], results[0]);
	free(results);
	return (EXIT_SUCCESS);
}
