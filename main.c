#include "main.h"

/**
 *main - checks if shell is working properly
 *Return: Always 0
 */
int main()
{
	char inputString[MAXCOM], *inputParameter[MAXLIST];
	char *inputparameterstream[MAXLIST];
	int execFlag = 0;
	init_shell();

	while (1)
	{
		printDir();
		if (takeInput(inputString))
			continue;
		execFlag = processString(inputString,
				inputParameter, inputparameterstream);
		
		if (execFlag == 1)
			execParameter(inputParameter);
		
		if (execFlag == 2)
			execparameterstream(inputParameter, inputparameterstream);
	}
	return (0);
}
