#include "monty.h"
/**
 *read_file - reads a text file (and prints it to a standart output)
 *@file_name: name of the file to read
 * Return: number of letters to print, 0 otherwise
 */
void read_file(const char *file_name)
{
	FILE *fp;
	ssize_t bytes_read;
	void (*p)(stack_t **, unsigned int);
	size_t len = 0;
	char *line = NULL;
	char *token0 = NULL;
	char *token1 = NULL;
	char *delim = "\n ";
	int line_number = 0;
	stack_t *head = NULL;

	fp = fopen(file_name, "r");
	if (!fp)
	{
		printf("Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	while ((bytes_read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		token0 = strtok(line, delim);
		token1 = strtok(NULL, delim);
		tokennum = token1;
		if (!token0 || !line || token0[0] == '#')
			continue;
		p = get_funct(token0);
		if (p == NULL)
		{
			printf("L%d: unknown instruction %s\n", line_number, token0);
			free_stack(head);
			free(line);
			exit(EXIT_FAILURE);
		}
		p(&head, line_number);
	}
	fclose(fp);
	free(line);
	free_stack(head);
}
