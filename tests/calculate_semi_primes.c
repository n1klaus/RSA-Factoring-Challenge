#include "factors.h"
/**
 * calculate_semi_primes - finds two integer prime factors of a number
 * @num integer number
 * 
 * Return: a list of two prime integer numbers
 */
size_t calculate_semi_primes(size_t num)
{
	size_t i = 1, bf = 0, f = 0, pf = 0;
	
	for (; i <= num; i++)
	{
		if (num % i == 0)
		{
			pf = bf;
			fprintf(stdout, "pf:=> %ld\n", pf);
			f = i;
			fprintf(stdout, "f:=> %ld\n", f);
			bf = best_choice(pf, f);
		}
	}
	fprintf(stdout, "bf:=> %ld\n", bf);
	return (bf);
}