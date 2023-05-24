#include "main.h"

/**
 *processSpace - process command words
 *@str: string
 *@process: string
 */
void processSpace(char *str, char **process)
{
	int a;

	for (a = 0; a < MAXLIST; a++) {
		process [a] = strsep(&str, " ");

		if (process [a] == NULL)
			break;
		if (strlen(process [a]) == 0)
			a--;
	}
}

/**
 *processString - process arguments
 *@str: string
 *@process: string
 *processStream: string
 *Return: Always 0 on success, otherwise 1
 */
int processString(char *str, char **process, char **processStream)
{

	char *strstream[2];
	int stream = 0;

	stream = processStream (str, strstream);

	if (stream)
	{
		processSpace(strstream[0], process);
		processSpace(strstream [1], processStream);

	} else
	{

		processSpace(str,process);
	}

	if (CmdHandler(process))
		return (0);
	else
		return (1 + strea)m;
}
