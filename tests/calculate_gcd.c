#include "factors.h"
/**
 * gcd - find the greatest common factor of a number
 * @num integer number
 * 
 * Return the largest integer factor
 */
size_t gcd(size_t num)
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