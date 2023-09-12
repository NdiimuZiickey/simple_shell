#include "main.h"
/**
 * get_path - get's the path of the written command
 * @command: command to search for it's path
 * Return: path of command
 */
char *get_path(char *command)
{
	char *path, *path_cp;
	int len;

	path = getenv("PATH");
	path_cp = strdup(path);
	len = strlen(command);
	
