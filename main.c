#include "main.h"
/**
 * main - printing prompt
 * @argc: no of arguments passed
 * @argv: arguments passed
 * Return: 0
 */
int main(void)
{
	char *lineptr = NULL, *lineptr_cp = NULL;
	size_t n = 0;
	ssize_t nread;
	const char *dm = " \n";
	char *word, **words;
	int nword, i;


		printf("shell $ ");
		nread = getline(&lineptr, &n, stdin);
		lineptr_cp = malloc(sizeof(char) * nread);
		if (lineptr_cp == NULL)
		{
			perror("tsh: memoy not allocated");
			return (-1);
		}
		strcpy(lineptr_cp, lineptr);
		if (nread == -1)
		{
			printf("exit...\n");
			return (-1);
		}
		else
		{
			word = strtok(lineptr, dm);
			for (nword = 1; word != NULL; nword++)
				word = strtok(NULL, dm);
			words = malloc(sizeof(char *) * (nword + 1));
			word = strtok(lineptr_cp, dm);
			for (i = 0; word != NULL; i++)
			{
				words[i] = malloc(sizeof(char) * strlen(word));
				strcpy(words[i], word);
				word = strtok(NULL, dm);
			}
			words[i] = NULL;

			exec(words);


			free(words);
			free(lineptr);
			free(lineptr_cp);
		}

		return (0);
}
