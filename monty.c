#include "monty.h"

/**
 * main - opens monty file and reads lines
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 success, 1 failure
 */

int main(int ac, char *av[])
{

	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
		read_file(av[1]);
	return (0);
}
