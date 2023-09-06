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
	char *lineptr;
	size_t n = 0;
	(void)argc, (void)argv;

	printf("%s", shell);
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);
	free(lineptr);
	return (0);
}
