#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
	int i = 0;
	char **ptr = environ;
	while (*ptr++)
		i++;
	 printf("Number of environment variables: %d\n", i);

	return 0;
}
