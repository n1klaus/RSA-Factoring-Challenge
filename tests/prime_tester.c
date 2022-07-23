/*
 * primeCount - count the maximum number of distinct prime factors
 * of any number in the inclusive range [1, n]
 * @n : limit
 * 
 * Return : number of dictinct prime factors
 */
int primeCount(long n) {
    unsigned int count = 0, i = 0;
    unsigned long *pf, product = 1, prime_factors[] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    pf = prime_factors;

    if (n == 1)
        return(0);
    
    for (; (product * (*(pf + i))) <= (unsigned long)n; i++, count++)
    {
        product *= (*(pf + i));
        printf("Item [%2d]:=> %-6ld:=> %-20ld\n", count, (*(pf + i)), product);
    }
    return (count);
}