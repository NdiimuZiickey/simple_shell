#include "main.h"
/**
 * exec - execute commands
 * @words: commands array
 */
void exec(char **words)
{
	char *command = NULL;

	if (words != NULL)
	{
		command = words[0];
		if (execve(command, words, NULL) == -1)
			perror("Error:");
	}
}
