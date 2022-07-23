#ifndef __FACTORS_H__
#define __FACTORS_H__

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <aio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define MAXLEN 100

int file_stream(char **av);
int get_factors(size_t num);
size_t get_semi_primes(size_t num);

#endif /* __FACTORS_H__ */