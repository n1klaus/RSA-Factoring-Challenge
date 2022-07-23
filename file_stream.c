#include "factors.h"
/**
 * file_stream - get tokens from input file
 * @av : arguments array
 *
 * Return: 0 if exited successfully, otherwise 1
 */
int file_stream(char **av)
{
	FILE *instream = NULL;
	ssize_t numchar = 0;
	size_t len = MAXLEN, line = 1;
	char *delim = " \r\f\v\t\n";
	char **lineptr = malloc(sizeof(char) * BUFSIZ);
	char **token_str = malloc(sizeof(char) * BUFSIZ);

	if (lineptr == NULL || token_str == NULL)
	{
		fprintf(stderr, "Malloc Error\n");
		return (EXIT_FAILURE);
	}
	instream = fopen(av[1], "r");
	if (instream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
	while ((numchar = getline(lineptr, &len, instream)) != -1)
	{
		while ((*token_str = strtok(*lineptr++, delim)) != NULL)
		{
			if ((get_factors(atoll(*token_str))) ==
				EXIT_FAILURE)
			{
				fprintf(stderr, "Error computing factors for line %ld\n", line);
				return (EXIT_FAILURE);
			}
		}
		line++;
	}
	free(token_str);
	fclose(instream);
	return (EXIT_SUCCESS);
}
