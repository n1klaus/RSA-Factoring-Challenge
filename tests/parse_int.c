#include "factors.h"
/**
 * parse_int - convert string to long integer 
 * 
 * @param str 
 * @return size_t 
 */
size_t parse_int(char *str)
{
    char **endptr = malloc(BUFSIZ);
    size_t value = 0;
    
    value = strtol(str, endptr, 10);
    if ((*endptr) == str || (**endptr) != '\0') {
        exit(EXIT_FAILURE);
    }

    free(endptr);
    return value;
}