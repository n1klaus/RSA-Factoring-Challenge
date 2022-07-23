#include "factors.h"
/**
 * main - main function to read user input
 * @ac : arguments count
 * @av : arguments array
 *
 * Return: 0 if exited successfully, otherwise 1
 */
int main(int ac, char **av)
{
	int wstate;
	pid_t child_pid;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		return (EXIT_FAILURE);
	}

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Child Error");
		return (EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		if (file_stream(av) == EXIT_FAILURE)
		{
			fprintf(stderr, "Input File stream error\n");
			return (EXIT_FAILURE);
		}
	}
	else
		wait(&wstate);
	return (EXIT_SUCCESS);
}
