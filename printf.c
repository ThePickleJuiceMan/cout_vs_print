#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char * s = "Pointer to a string constant";

	for(int i = 0; i < atoi(argv[1]); i++)
	{
		printf("%s\n", s);
	}

	return 0;
}
