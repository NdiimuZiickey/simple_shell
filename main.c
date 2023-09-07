#include "main.h"
/**
 * main - printing prompt
 * @argc: no of arguments passed
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *shell = "shell $ ";
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t eof;
	(void)argc, (void)argv;

	while (1)
	{
		printf("%s", shell);
		eof = getline(&lineptr, &n, stdin);
		if (eof == -1)
		{
			printf("exit...\n");
			return (-1);
		}
		printf("%s", lineptr);
		free(lineptr);
		lineptr = NULL;
	}
	return (0);
}
